#include <iostream>
using namespace std;

class stuent{
    int rollNum;
    public:
    float weight;
    void setweiht();
    int getwheight();
    int getwheight2();
};
void stuent::setweiht(void){
    weight = 50.20;
    rollNum = 1251;
}
int stuent ::getwheight(void){
    return rollNum;
}
int stuent ::getwheight2(void){
    return weight;
}
// inheritans Ex:
// defult visiblity mode is private in derived class
class sixTH : public stuent{
    int data3;
    public:
        void process();
        void display();
};
void sixTH ::process(){
    data3 = weight * getwheight();
}
void sixTH::display(){
    cout<<"VALE OF DATA ONE IS "<<getwheight()<<endl;
    cout<<"VALE OF DATA ONE IS "<<weight<<endl;
    cout<<"VALE OF DATA ONE IS "<<data3<<endl;
}
   
int main()
{
    stuent vaibhav;
    sixTH a1;
    a1.setweiht(); 
    cout<<vaibhav.weight<<endl;
    a1.process();
    a1.display();

    return 0;
}