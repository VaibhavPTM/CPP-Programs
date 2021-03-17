#include<iomanip>
#include<iostream>
using namespace std;
//without typedef
struct employee
{
    int id;
    char name;
    float salaryee;
};
//with typerdef to make it easy
typedef struct employees
{
    int id;
    char name;
    float salaryee;
}eas;
//unions
union monye // use for memory menagment
{
    int rice;
    char car;
    double punds;
};

int main()
{
    //union
    union monye m1;
    int m2;
    m1.rice  = 23;
    m2 = m1.rice;
    cout<<m2<<"\n";
    //without typedef
    employee vaibhav;
    vaibhav.id = 213123;
    vaibhav.name = 'h';
    vaibhav.salaryee = 10000.324F;


    cout<<vaibhav.id<<endl;
    cout<<vaibhav.name<<endl;
    cout<<vaibhav.salaryee<<endl;
    //with typerdef to make it easy
    // eas vaibhav;
    // vaibhav.id = 213123;
    // vaibhav.name = 'v';
    // vaibhav.salaryee = 1000000;
    
    cout<<"welcome"<<endl;


    return 0;

}