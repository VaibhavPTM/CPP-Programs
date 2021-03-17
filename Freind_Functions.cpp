/* 
1. friend function in not in the main class but this function can use the privat variable of main class
2. since it is not in the scope of the class, it can not be called from the object of that class. in this 
program c1.SumComplex is invalid
3. can be invoked without the help if any objects
4. usually contans the objects as argumnets
5. can be declard inside public or privat section of the class
it cannot access the member directly by their names and need object_name.member_name to access any member
*/
#include<iostream>

using namespace std;

class complex{
    int a,b;
    public:
        void setnum(int n1, int n2){
            a = n1;
            b = n2;
        }
        friend int number(void);
        friend complex SumComplex(complex , complex); // using this mathod you can acsess this privat members of complet class
        void pritnNum();
}c1,c2,sum;
void complex::pritnNum(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
complex SumComplex(complex o1, complex o2){
    complex o3;
    o3.setnum((o1.a + o2.b),(o1.a +  o2.b)); // ascessing the privet members of complex class
    return o3;
}
int number(){
    cout<<"The sum is ";
    return c1.a + c1.b;
}
int main(){
    c1.setnum(1,4);
    c2.setnum(5,8);
    c1.pritnNum();
    c2.pritnNum();
    cout<<number();

    sum = SumComplex(c1,c2);
    cout<<endl;
    sum.pritnNum();
    return 0;
}
