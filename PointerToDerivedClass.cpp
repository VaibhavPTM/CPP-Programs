#include <iostream>
#include <cstring>
using namespace std;
class SubMain
{
protected:
    string title;
    float rating;

public:
    SubMain(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display(void){}
};
class subjectInfo : public SubMain
{
    int subnumber;

public:
    subjectInfo(string s, float r, int i) : SubMain(s, r)
    {
        subnumber = i;
    }
    void display(void){
        cout<<"The name of the subject is "<<title<<endl;
        cout<<"The rating of the subject is "<<rating<<endl;
        cout<<"The number of the subject is "<<subnumber<<endl;
    }
};
class subjectword : public SubMain
{
    int subword;

public:
    subjectword(string s, float r, int i) : SubMain(s, r)
    {
        subword = i;
    }
    void display(){
        cout<<"The name of the subject is "<<title<<endl;
        cout<<"The rating of the subject is "<<rating<<endl;
        cout<<"The words of the subject is "<<subword<<endl;
        
    }
};
int main()
{
    string  title;
    float rating,subnum;
    int Subword;
    title = "English";
    rating = 4.5;
    subnum = 2;
    Subword = 7;
    subjectInfo sub1(title,rating,subnum);
    // sub1.display();
    
    
    subjectword sub2(title,rating,Subword);
    // sub2.display();
    SubMain *ptr[2];
    ptr[0] = &sub1;
    ptr[1] = &sub2;
    ptr[0]->display();
    ptr[1]->display();


    

    return 0;
}