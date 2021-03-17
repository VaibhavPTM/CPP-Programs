#include <iostream>
using namespace std;
class GcDnum
{
    int num1, num2;

public:
    GcDnum(int , int);
    int Gcdnum();
};
GcDnum::GcDnum(int a, int b){
    num1 = a;
    num2 = b;
}
int GcDnum ::Gcdnum()
{
    while (num1!=num2)
    {
        if(num1>num2)
        num1 -= num2;
        else
        num2 -= num1;
    }
    
    return num2;
}
int main()
{
    int x, y;
    cout << "Enter your two numbers :";
    cin >> x >> y;
    GcDnum number(x,y);
    cout<<number.Gcdnum();
    return 0;
}