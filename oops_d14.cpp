#include<bits/stdc++.h>
using namespace std;
class bank{
    int p;
    int y;
    float rate;
    float ret;
    public:
    bank(){} //constructor overloading need a case with no value if nothing is passed
    bank(int principal , int year , float rt){
        p = principal; //constructor runtime overloading
        y = year;
        rate = rt;
        ret = p;
        for(int i=0 ; i<y ; i++){
            ret += ret * rate;
        }
    }
    bank(int principal , int year , int rt){
        p = principal;
        y = year;
        rate = (float) rt/100;
        ret = p;
        for(int i=0 ; i<y ; i++){
            ret += ret * rate;
        }
    }
    void show(void){
        cout<<"Total amount of money on principal amount "<<p<<" after "<<y<<" years is : "<<(int)ret<<endl;
    }
};
int main() {
    bank b1 , b2 , b3; //need to define a nothing constructor if nothing is passed in future
    b1 = bank(100 , 1 , 0.04f); // need 'f'(for float) as 0.04 could be both int(0) or float(0.04)
    b1.show();

    b2 = bank(1000000 , 25 , 8);
    b2.show();

    b3.show(); //like in this nothing is passsed;

    return 0;
}