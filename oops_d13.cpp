#include<bits/stdc++.h>
using namespace std;
class compx{
    int a , b;
    public: //constructor having a default value if nothing is passed
    compx(int x = 3 , int y = 1){ //default constructor
        a = x;
        b = y;
    }
    void print(void){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
int main() {
    compx c1 , c2(3) , c3(4 , 5);
    c1.print() ; c2.print() ; c3.print();
    return 0;
}