#include<iostream>
using namespace std;

int main()
{
    // new keyword
    int *p = new int(4);
    //via this keyword we can add the value dynamically and don't have to make a variable
    cout<<"The value ia address p is "<<*p<<endl;

    // array using this mathod
    int *ptr = new int[3];
    ptr[0] = 23;
    ptr[1] = 645;
    ptr[2] = 866;
    delete ptr;
    cout<<"Tha value "<<ptr[0]<<endl;
    cout<<"Tha value "<<ptr[1]<<endl;
    cout<<"Tha value "<<ptr[2]<<endl;
    
    // delet operator or keyword

    return 0;
}