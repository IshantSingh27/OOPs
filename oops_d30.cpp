#include<bits/stdc++.h>
using namespace std;
class cx{
    int a , b;
    public:
    void set(int x , int y){
        a = x;
        b = y;
    }
    void show(void){
        cout<<"a is : "<<a<<endl;
        cout<<"b is : "<<b<<endl;
    }
};
int main() {
    cx c1;
    cx *ptr = &c1;
    (*ptr).set(7 , 18);
    ptr->show();

    cx *ptr1 = new cx[4];
    ptr1->set(45 , 77);
    ptr1->show();

    return 0;
}