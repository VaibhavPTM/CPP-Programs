#include<iostream>
using namespace std;

struct sub
{
    unsigned sun1 : 1;
    int sun2  : 6;
}math = {1,12};

struct student
{
    int a;
    float b;
    int sd;
    struct sub math;
}s1;


int main()
{
    cout<<math.sun2;
    
    return 0;
}