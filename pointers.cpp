#include<iostream>
using namespace std;

int main()
{
    // Pointers
    float as;
    float *p = &as;
    char *z;
    cout<<(int)sizeof(*z)<<endl;
    cout<<(int)sizeof(z)<<endl;
    cin>>as;
    cout<<"Value os pointer is "<<&as<<endl;
    cout<<"Value os pointer is "<<p<<endl;
    // & -------> (Address of) oprator
    // * -------> (Value at) Dereference oprator
    // pointer of pointer
    float** p2 = &p;
    cout<<"Value os pointer is "<<*p2<<endl;
    cout<<"Value os pointer is "<<**p2<<endl;

}