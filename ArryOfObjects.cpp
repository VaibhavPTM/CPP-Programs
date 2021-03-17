#include <iostream>

using namespace std;
class employee
{
private:
    int id;
    int salary;

public:
    void setId(void)
    {
        cout << "Enter id of employee" << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
} vaibhav, meet, rohan;
int main()
{
    // vaibhav.setId();
    // vaibhav.getid();
    employee ep[4]; //array of employee class
    ep[0].setId();
    ep[0].getid();

    return 0;
}