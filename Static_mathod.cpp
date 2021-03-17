/*
in static variable, is you incres the variable then it have incresed for all objects.
as a ex. belowe if you change the count then count has changed for all object 
*/
#include <iostream>

using namespace std;
class employee
{
    int id;
    static int count; //you can not assing a value here and default value is 0
public:
    void setDate(void)
    {
        cout << "Emter the id" << endl;
        cin >> id;
    }
    void GetDate(void)
    {
        cout << "The employee id is " << id;
    }
};
//count is the static variable of employee class
int employee ::count; //Default value os static variable is 0 and you can asing a value here
int main()
{
    employee vaibhav, meet, naimish;
    vaibhav.setDate();
    vaibhav.GetDate();

    meet.setDate();
    meet.GetDate();

    naimish.setDate();
    naimish.GetDate();
    return 0;
}