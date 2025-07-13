#include<bits/stdc++.h>
using namespace std;
class compx; //declaration of presense of compx ahead
class calculate{
    public:
    int add(int a , int b){
        return a + b;
    } //cannot do (return c1.a + c2.a;) here as it don't know wether-
    int sumreal(compx , compx); // it has .a , .b or anything else.
    int sumcomp(compx , compx); //therefore declared later.
};
class compx{
    int a , b; //individual declaration of function of class as friends
    friend int calculate :: sumreal(compx , compx);
    friend class calculate; //makes whole class friend and access private data
    public:
    void set(int a1 , int b1){
        a = a1; b = b1;
    }
    void print(){
        cout<<"Complex number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};
int calculate :: sumreal(compx c1 , compx c2){
    return c1.a + c2.a;
} //declared funcs of calculate
int calculate :: sumcomp(compx c1 , compx c2){
    return c1.b + c2.b;
}
int main() {
    compx c1 , c2;
    c1.set(1 , 4); c1.print();
    c2.set(4 , 8); c2.print();
    calculate cal;
    cal.add(7 , 18);
    int sumr = cal.sumreal(c1 , c2);
    cout<<"Sum of real part of complex is : "<<sumr<<endl;
    int sumc = cal.sumcomp(c1 , c2);
    cout<<"Sum of imaginary part of complex is : "<<sumc<<endl;
    return 0;
}