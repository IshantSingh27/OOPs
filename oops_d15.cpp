#include<bits/stdc++.h>
using namespace std;
class num{
    int a;
    public:
    num(){
        a = 0;
    }
    num(int n){
        a = n;
    }
    num(num& obj){ //self declared copy constructor.
        cout<<"Copy contructor called."<<endl;
        a = obj.a; //passed via address so obj.a accessible
    }
    void show(void){
        cout<<"The Number is : "<<a<<endl;
    }
};
int main() {
    num n1 , n2 , n3 , n4; // also works without constructor created
    n1 = num(); n1.show(); // via default copy constructor of the compiler
    n2 = num(3); n2.show();
    n3 = num(n2); n3.show();
    n4 = n2; n4.show();
    num n5 = n3; n3.show();
    return 0;
}