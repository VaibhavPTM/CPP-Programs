#include <iostream>
using namespace std;
// Destructor never takes a argument and never return any values

class num
{
public:
    static int a;
    num();
    // made a destructor
    ~num();
};
num::num()
{
    a++;
    cout << "this is the when the contructor is called for object number " << a << endl;
}
num::~num()
{
    cout << "this is time whem my dectutor is called " << a << endl;
    a--;
}
int num::a;
int main()
{
    cout << "we are inside the main fuction" << endl;
    cout << "creating two objects" << endl;
    num n1;
    {
        cout << "entering this block" << endl;
        cout << "creating two more objects" << endl;
        num n3, n4;
        cout << "exiting this block" << endl;
    }
    cout<<"back to main"<<endl;

    return 0;
}
/*
When the complier suspect that at this time program don't need this object at that momment dectuctor fre that
object or destroy that object
*/