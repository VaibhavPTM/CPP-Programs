#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        void setData(int x, int y){
            a = x;
            b = y;
        }
        void getData(){
            cout<<"value of a is "<<a<<endl
            <<"value of b is "<<b<<endl;
        }
};
int main()
{
    complex a1;
    // pointer to objects
    complex * ptr = &a1;
    complex *ptr2 = new complex;
    a1.setData(19,12);
    (*ptr).getData();    
    (*ptr2).setData(32,34);
    (*ptr2).getData();
    ptr2->setData(21,34);
    ptr2->getData();
    
    return 0;
}