#include<iostream>
using namespace std;
class base{
    public:
    int var =101;
    virtual void display(){
        cout<<"Dispalying base class variable "<<var<<endl;
    }
};
class derived : public base{
    public:
    int var2 = 11;
    virtual void display(){
        cout<<"Base variable "<<var<<endl
            <<"Derived variable "<<var2<<endl;
    }
};
class derived2 : public base{
    public:
    int var2 = 12;
    void display(){
        cout<<"Base2 variable "<<var<<endl
            <<"Derived2 variable "<<var2<<endl;
    }
};
int main()
{
    // base pointer can point on derived class
    // and on the outer side dirived pointer can not pointe to base class
    base b1;
    derived d1;
    derived2 d2;
    base *ptr1;
    // base *ptr3;
    derived *ptr2;
    ptr1 = &d2;
    ptr2 = &d1;
    // ptr1->display();
    ptr2->display();
    return 0;
}