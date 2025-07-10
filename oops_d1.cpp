#include<bits/stdc++.h>
using namespace std;

class Employee{
    private:
    int a , b , c;
    public:
    int d , e;
    void set(int a , int b , int c);
    void get(){
        cout<<"value of a is : "<<a<<endl;
        cout<<"value of b is : "<<b<<endl;
        cout<<"value of c is : "<<c<<endl;
        cout<<"value of d is : "<<d<<endl;
        cout<<"value of e is : "<<e<<endl;
    }
};

void Employee :: set(int a1 , int b1 , int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main() {
    Employee ish;
    ish.d = 7;
    ish.e = 18;
    ish.set(4 , 5 , 6);
    ish.get();

    return 0;
}