#include <iostream>
#include <cmath>
using namespace std;
/*  craet 2 class
1.siple calculater -- takes input of 2 number using a utility fuction 
2.scientifit calculater -- takes input of 2 number using a utility fuctiony
*/
void start(void);
class simpleCal
{
    int ask;

protected:
    int num1;
    int num2;

public:
    void setvalue()
    {
        int a, b;
        cout << "Enter your two numbers : ";
        cin >> a >> b;
        num1 = a;
        num2 = b;
    }
    int run1()
    {
        cout << "Whta do you want to do?\nEnter,\n1 for addtion\n2 for subtraction\n3 for multiplication\n4 for divison.\n>> ";
        cin >> ask;
        switch (ask)
        {
        case 1:
            cout<<"your answer is :"<< (num1 + num2);
            break;
        case 2:
            cout<<"your answer is :"<< (num1 - num2);
            break;
        case 3:
            cout<<"your answer is :"<< (num1 * num2);
            break;
        case 4:
            cout<<"your answer is :"<< (num1 / num2);
            break;
        default:
            cout<<"Enter valid number!";
            break;
        }
    return 0;
    }
};
class scintificCal
{
    int ask;
protected:
    int num3;

public:
    void setvalues(void);
    int run2(void){
        cout<<"Enter,\n1 for sinx\n2 for cosx\n3 for tanx\n4 for cotx\n>> ";
        cin>>ask;
        switch (ask)
        {
        case 1:
            cout<<"your answer is :"<< (sin(num3));
            break;
        case 2:
            cout<<"your answer is :"<< (cos(num3));
            break;
        case 3:
            cout<<"your answer is :"<< (tan(num3));
            break;
        case 4:
            cout<<"your answer is :"<< (1/tan(num3));
            break;
        default:
            cout<<"Enter valid number";
            break;
        }
        return 0;
    }
};
void scintificCal::setvalues(void)
{
    int a, b;
    cout << "Enter your one number : ";
    cin >> a ;
    num3 = a;
}
class hybridCal : public simpleCal, public scintificCal
{
public:
    void start(void);
};
int main()
{
    hybridCal start;
    start.start();

    return 0;
}
void hybridCal ::start()
{
    int ask;
    cout << "calculater do you want to use? enter 0 for simple and 1 for scientific : ";
    cin >> ask;
    switch (ask)
    {
    case 0:
        setvalue();
        run1();    
        break;
    case 1:
        setvalues();
        run2();    
        break;
    
    default:
        break;
    }
}