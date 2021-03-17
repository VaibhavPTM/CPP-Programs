#include<iostream>

using namespace std;

int swapNum(int&, int&);
int main(){
    int q,w;
    cin>>q>>w;
    swapNum(q,w);
    cout<<q <<" "<<w ;


    return 0;
}
int swapNum(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return 0;
}