#include<iostream>
#include<cmath>

using namespace std;

class number
{
    private:
        int number;
        
    public:

        void magicnum(int);
        void perfectnum(int);
        void primenum(int);

};
void number ::magicnum(int num){
    number = 0;
    
    while (number > 9 || num>0)
    {
        if (num ==0)
        {
            num  = number;
            number = 0;
        }
        number = number + (num%10);
        num = num/10;
    }
    if(number == 1){
        cout<<">> This number is magic numer";
    }
    else
    {
        cout<<">> This number is not magic number";
    }
    

}
void number ::perfectnum(int num){
    number =0;
    for(int i=1;i<num;i++)
    {
        if (num%i == 0)
        {
            number += i;
        }
    }
    if(number == num){
        cout<<">> This number is perfect numer";
    }
    else
    {
        cout<<">> This number is not perfect number";
    }
}
void number ::primenum(int num){
    bool temp = 1;

    temp = (num ==0 || num ==1)?0:1;
    for (int i = 2; i <=num/2; i++)
    {
        if(num%i == 0){
            temp = 0;
            break;
        }
    }
    if(temp == 1){
        cout<<">> This number is prime numer";
    }
    else
    {
        cout<<">> This number is not prime number";
    }
    
}

int main(){
    int num1;
    number check;
    cout<<"Enter the number which you want to check"<<endl;
    cin>>num1;
    check.magicnum(num1);
    check.perfectnum(num1);
    check.primenum(num1); 
    return 0;
}