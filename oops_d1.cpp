#include<bits/stdc++.h>
using namespace std;
class Employee{
    private: //can be accessed in class only
    int a , b , c;
    public: //can be accessed anywhere
    int d , e;
    void set(int a , int b , int c); // gives assurance that you will find it later.
    void get(){
        cout<<"value of a is : "<<a<<endl;
        cout<<"value of b is : "<<b<<endl;
        cout<<"value of c is : "<<c<<endl;
        cout<<"value of d is : "<<d<<endl;
        cout<<"value of e is : "<<e<<endl;
    }
};
void Employee :: set(int a1 , int b1 , int c1){
    a = a1; //This function is Declared out of the class.
    b = b1;
    c = c1;
}
int main() {
    Employee ish; //object of class
    ish.d = 7; //public can be accessed
    ish.e = 18;
    ish.set(4 , 5 , 6); //private using function
    ish.get();
    return 0;
}