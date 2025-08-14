#include<bits/stdc++.h>
using namespace std;

class A{
    int a;
    public:
    // A & set(int a){
    //     this->a = a; //points to a that is class variable
    //     return *this;
    // }
    void set(int a){
        this->a = a;
    }
    void get(){
        cout<<"a : "<<a<<endl;
    }
};

int main() {
    A a1;
    a1.set(18);
    // a1.set(18).get(); //ca do rhis if func has a non void return type
    a1.get();

    return 0;
}