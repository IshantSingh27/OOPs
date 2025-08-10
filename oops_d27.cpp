#include<bits/stdc++.h>
using namespace std;

class b1{
    int data1;
    public:
    b1(int n){
        cout<<"b1 constructor called"<<endl;
        data1 = n;
    }

    void p1(void){
        cout<<"value of data1 is : "<<data1<<endl;
    }
};
class b2{
    int data2;
    public:
    b2(int n){
        cout<<"b2 constructor called"<<endl;
        data2 = n;
    }

    void p2(void){
        cout<<"value of data2 is : "<<data2<<endl;
    }
};
class d1 : public b1 , public b2{ // order of b1 b2 here matters for calling constructor.
    int der;
    public:
    d1(int a , int b , int c) : b1(a) , b2(b) { // order not matter here. Its syntax for passing value to constructor.
        cout<<"d1 constructor called"<<endl;
        der = c;
    }

    void print(void){
        p1();
        p2();
        cout<<"value of der is : "<<der<<endl;
    }
};

int main() {
    d1 ish(7 , 18 , 45);
    ish.print();

    return 0;
}