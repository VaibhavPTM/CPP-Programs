#include <iostream>
using namespace std;
class complex;
class claculater
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumealcomplex(complex, complex);

} clas;

class complex
{
    int a, b;

public:
    void setnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
//--------------------------------------------------------------------------
// friend class claculater; //By this mathod all fuction of the claculater class can use all privet memers of complex class
//--------------------------------------------------------------------------
    friend int claculater ::sumealcomplex(complex o1, complex o2);
    void pritnNum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
} o3;
int claculater ::sumealcomplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}

int main()
{
    complex o1, o2;
    o1.setnum(1, 4);
    o2.setnum(5, 7);
    int a = clas.sumealcomplex(o1, o2);
    cout << a;

    return 0;
}