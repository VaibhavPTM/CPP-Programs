#include<iostream>
#include<string>

using namespace std;
// constant argument in function
float intrest(int monye,const float rate = 1.02)//second argument is constant and you dont't have to put it while running
{
    return monye * rate;
}
int strLen(string a)
{
    return a.size();
}
int main(){
    int a = 100000;
    string b;
    getline(cin , b); //take a string from user with spaces.
    // cout<<"you will get "<<intrest(a)<<" RS";
    //we can also change the value of rate by this mathod
    // cout<<endl<<"you will get "<<intrest(a, 1.08)<<" RS"<<endl;
    cout<<b.size();

    return 0;
}