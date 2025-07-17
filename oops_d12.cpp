#include<bits/stdc++.h>
using namespace std;
class compx{
    int a , b;
    public:
    compx(void){
        a = 0;
        b = 0;
    }
    compx(int x){ //constructor overloading
        a = x;
        b = 0;
    }
    compx(int x , int y){ //parametrized constructor
        a = x;
        b = y;
    }
    void print(void){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
int main() {
    compx c1 , c2(3) , c3(4 , 5);
    c1.print() , c2.print() , c3.print();
    return 0;
}