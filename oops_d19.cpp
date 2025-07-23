#include<bits/stdc++.h>
using namespace std;
class base{
    int d1;
    public:
    int d2;
    void set();
    int get1();
    int get2();
};
void base :: set(){
    d1 = 10;
    d2 = 20;
}
int base :: get1(){
    return d1;
}
int base :: get2(){
    return d2;
}
class derived : base{
    int d3;
    public:
    void process();
    void show();
};
void derived :: process(){
    set(); //to be done if visibility private
    d3 = d2 * get1();
}
void derived :: show(){
    cout<<"data 1 is : "<<get1()<<endl;
    cout<<"data 2 is : "<<d2<<endl;
    cout<<"data 3 is : "<<d3<<endl;
}
int main() {
    derived der;
    // der.set(); not if visibility is private
    der.process();
    der.show();
    return 0;
}