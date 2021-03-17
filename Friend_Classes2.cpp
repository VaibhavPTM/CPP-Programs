//-----------------cmplex example of friend function-------------------------
#include<iostream>

class c2;
using namespace std;
class c1{
    int val;
    public:
    friend void Exchang(c1&,c2&);
        void intData(int a){
            val = a;
        }
        void display(){
            cout<<val<<endl;
        }
};
class c2{
    int val2;
    friend void Exchang(c1&,c2&);
    public:
        void intData(int a){
            val2 = a;
        }
        void display(){
            cout<<val2<<endl;
        }
};

void Exchang(c1 &x,c2 &y){
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;

}


int main(){
    c1 a;
    c2 b;
    a.intData(45);
    b.intData(34);
    Exchang(a,b);
    cout<<"the value of a is ";a.display();
    cout<<"the value of b is ";b.display();

    return 0;
}


/*
-----------------Simple example of friend function-------------------------
#include <iostream>

using namespace std;
class y;
class x
{
    int dat;

public:
    void setValue(int value){
        dat = value;
    }
    friend void add(x,y);
};
class y
{
    int data2;
    
public:
    void setValue(int value){
        data2 = value;
    }
    friend void add(x,y);
};
void add(x o1, y o2){
    cout<<"Sum of two data is "<<o1.dat + o2.data2;
}
int main()
{
    x a1;
    y a2;
    a1.setValue(2);
    a2.setValue(5);
    add(a1,a2);

    return 0;
}
*/