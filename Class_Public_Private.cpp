#include<iostream>

using namespace std;

class student
{
    private:
        int a,b,c; 
    public:
        int x,y;
    int sum(int a, int b);
};

int student :: sum(int a,int b){
    // a =a1;
    // b = b1;
    
    cout<<a<<endl;
    return a+b;
}


int main(){
    student sam;
    int p ,q ;
    cin>>p>>q;
    cout<<sam.sum(p,q);
    

    return 0;
}