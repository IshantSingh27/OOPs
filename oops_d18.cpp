#include<bits/stdc++.h>
using namespace std;
class emp{
    public:
    int salary;
    int empid;
    emp(int id , int sal){
        empid = id;
        salary = sal;
    } // You need emp() {} (the default constructor) in your emp class because of how C++
    emp(){}; // constructs base class objects when the derived class (prog)
}; //  does not explicitly call a base class constructor using an initializer list.
class prog : public emp{
    public:
    int lang = 0;
    //Option 2: Use initializer list to explicitly call base constructor
    prog(int n , int id , int sal) : emp(id, sal) {
        lang = n; //prog takes 3 input for passing to emp
    }
    //option 1 : using default constructor
    prog(int n , int id , int sal){
        lang = n;
        empid = id;
        salary = sal;
    }
    void show(){
        cout<<"Employee ID : "<<empid<<endl;
        cout<<" Employee Salary : "<<salary<<endl;
        cout<<"Employee Coding Language : "<<lang<<endl;
    }
};
int main() {
    emp e1(101 , 100) , e2(102 , 34);
    prog p1(2 , 101 , 1000) , p2(1 , 102 , 34);
    p1.show(); p2.show();
    return 0;
}