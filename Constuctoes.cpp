#include <iostream>
#include<cmath>

using namespace std;

class complex
{
    int d1, d2;

public:
    //creating a contucter
    //it is a special member functip  with the same name as the class. it is aitomatically invoked wheneverthe object has created

    complex(int, int); //constuctor declaration
    friend int main();       
    void addnum()
    {
        cout << d1 << d2;
    }
};
// complex ::complex(void)
// { // it is defualt constrctor
//     d1 = 10;
//     d2 = 12;
// }
complex ::complex(int a, int b)
{ // it is parmeterized constrctor
    d1 = a;
    d2 = b;
}
int main()
{
    int answ;
    //implicit call
    complex num(4, 6);
    //explicit call
    complex a = complex(4, 6);
    
    num.addnum();
    a.addnum();
    cout<<endl<<num.d1<<endl<<num.d2<<endl<<a.d1<<endl<<a.d2;
    cout<<endl<<sqrt((num.d1 - a.d1)*(num.d1 - a.d1) + (num.d2 - a.d2) * (num.d2 - a.d2));

    return 0;
}
/*
1. contructor shold be declaed in public section of the class
2. they are autometecally invokes whenever object is created
3. do not have a any return type
4. it can have defult arguments
5. we cannot refer to thair address.
6. we can also declere the contructor inside the class
*/