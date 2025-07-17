#include<bits/stdc++.h>
using namespace std;
class compx{ // default constructor
    int a , b;
    public: //constructor is special member function having same name as class.
    compx(void); //used to initialize object of class
    void print(void){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
compx :: compx(void){
    a = 10; b = 3;
}
int main() {
    compx c1;
    c1.print();
    return 0;
} //1. always declared in public. 2. invoked by creation of new object of class.
//3. do not have return types and cannnot return values.
//4. it can have default arguments 5. we cannot refer to their address.