#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    int b;
    virtual void show(void){ //declared as virtual
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
    d1.d = 7;

    base_ptr = &d1;

    base_ptr->b = 18;
    base_ptr->show(); // now base+ptr->show give thr derived class show function due to
    // base class show function as virtual

    return 0;
}