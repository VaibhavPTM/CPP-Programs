#include<iostream>
#include<string>
using namespace std;

class Binery
{
    string s; //By defalut all member os pblic class has been privat
private:
public:
    void read(void);
    void chk_bin(void);
    void once_complment(void);
};
void Binery :: read(void){
    cout<<"Enter a binery number"<<endl;
    cin>>s;
}
void Binery :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i) !='1')
        {
            cout<<"Incorrect binery foemet";
            exit(0);
        }
    }
}
void Binery :: once_complment(void){
    chk_bin(); // Example of nesting function.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    // for (int i = 0; i < s.length(); i++)
    // {
    //     cout<<s.at(i);
    // }
    cout<<s;
}
int main(){
    Binery numer;
    numer.read();
    numer.once_complment();

    return 0;
}