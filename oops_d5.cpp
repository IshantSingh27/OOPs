#include<bits/stdc++.h>
using namespace std;
class employee{
    int id;
    public:
    void set(void){
        cout<<"Enter id : ";
        cin>>id;
    }
    void get(void){
        cout<<"Employee id is : "<<id<<endl;
    }
};
class compx{
    int a , b;
    public:
    void set(int a1 , int b1){
        a = a1; b = b1;
    } //passing of object of same class as values
    void sum(compx c1 , compx c2){
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    } //can be objects of other class created
    void print(){
        cout<<"Complex number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main() {
    employee ish[4]; //array of type of class emp. for many emp.
    for(int i=0 ; i<4 ; i++){
        ish[i].set(); //create multiple objects of class;
        ish[i].get();
    }
    compx c1 , c2 , c3;
    c1.set(1 , 2); c1.print();
    c2.set(3 , 4); c2.print();
    c3.sum(c1 , c2); c3.print();
    return 0;
}