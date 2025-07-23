#include<bits/stdc++.h>
using namespace std;
class b1{
    protected:
    int n1;
    public:
    void set1(int a){
        n1 = a;
    }
};
class b2{
    protected:
    int n2;
    public:
    void set2(int a){
        n2 = a;
    }
};
class der : public b1 , public b2{
    public:
    void show(){
        cout<<"b1 is : "<<n1<<endl;
        cout<<"b2 is : "<<n2<<endl;
        cout<<"Sum of b1 + b2 is : "<<n1 + n2<<endl;
    }
};
int main() {
    der d1;
    d1.set1(3);
    d1.set2(4);
    d1.show();

    return 0;
}