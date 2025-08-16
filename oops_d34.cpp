#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    int b;
    void show(void){
        cout<<"b is : "<<b<<endl;
    }
};
class derived : public base{
    public:
    int d;
    void show(void){
        cout<<"b is : "<<b<<endl;
        cout<<"d is : "<<d<<endl;
    }
};
int main() {
    base b1;
    base *base_ptr;
    derived d1;
    derived *derived_ptr;

    base_ptr = &d1; //if base is inherited then we can use base pointer to point to derived class object.
    derived_ptr = &d1; // normal derved class pointer pointin to derived class

    base_ptr->b = 18;
    base_ptr->show(); //but show function runs of base class only as it is a pointer of base class

    derived_ptr->b = 180;
    derived_ptr->d = 70;
    derived_ptr->show();

    return 0;
}