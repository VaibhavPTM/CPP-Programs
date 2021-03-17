#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_no()
    {
        cout << "your roll number is " << roll_no << endl;
    }
};
class test : virtual public Student
{
protected:
    float math, eng;

public:
    void set_marks(float a, float b)
    {
        math = a;
        eng = b;
    }
    void print_marks()
    {
        cout << "you have got " << endl
             << "math: " << math << endl
             << "math: " << eng << endl;
    }
};
class sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float a)
    {
        score = a;
    }
    void print_score()
    {
        cout << "your pt score is " << score<<endl;
    }
};
class result : public test, public sports
{
private:
    float total;

public:
    void print_result()
    {
        total = math + eng + score;
        print_no();
        print_marks();
        print_score();
        cout << "Your total is " << total << endl;
        cout << "Your total is " << roll_no << endl;
    }
};

int main()
{
    result meet;
    meet.set_number(1251);
    meet.set_marks(89,86.5);
    meet.set_score(98.90);
    meet.print_result();
    return 0;
}