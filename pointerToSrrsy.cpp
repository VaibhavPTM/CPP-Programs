#include<iostream>
using namespace std;
int main()
{
    int point[] = {1,42,4351,13,242,32,132};
    int *a = point;
    cout<<*(&point[2]+ point[1]); 

    return 0;
}
