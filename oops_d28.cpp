#include<bits/stdc++.h>
using namespace std;

class test{
    int a; // depends on order of decleration here
    int b;
    public:
    // test(int i , int j) : a(i) , b(a + j){ // correct
    //     cout<<"value of a is : "<<a<<endl;
    //     cout<<"value of b is : "<<b<<endl;
    // }
    test(int i , int j) : b(j) , a(b + i){ // wrong as int a is declared first
        cout<<"value of a is : "<<a<<endl; //we can also declare inside but for complex constructor it is simpler approach.
        cout<<"value of b is : "<<b<<endl;
    }
};

int main() {
    test t1(7 , 18);

    return 0;
}