#include<bits/stdc++.h>
using namespace std;
class compx{
    int a , b;
    public:
    void set(int a1 , int b1){
        a = a1; b = b1;
    }
    void print(){
        cout<<"Complex number is : "<<a<<" + "<<b<<"i"<<endl;
    }
//friend func declaration gives access to the func to the private data of the class.
//the func is not present in the scope of class i.e independent func but access private data via friend decleration.
    friend compx sum(compx c1 , compx c2);
 //friend function can be declared in private or public section of class
};
compx sum(compx c1 , compx c2){
    compx c3; //it cannot diractly access the member of class by names like cout<<a;
    c3.a = c1.a + c2.a; c3.b = c1.b + c2.b; //the need object ref. to access member;
    return c3; //ex- object_name.member_name ( c1.a )
}
int main() {
    compx c1 , c2 , c3;
    c1.set(1 , 4); c1.print();
    c2.set(4 , 8); c2.print();
    c3 = sum(c1 , c2); c3.print();//usually contain objects of that class to access their private data.
//as sum is not a part of class so it cannot be called from the objects of class
    return 0;
}