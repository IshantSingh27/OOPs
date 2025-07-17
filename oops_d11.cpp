#include<bits/stdc++.h>
using namespace std;
class compx{ // default constructor
    int a , b;
    public:
    compx(int , int);
    void print(void){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};//parameterized constructor takes 2 int as input from initialization
compx :: compx(int x , int y){
    a = x; b = y;
}
int main() {
    compx c1(3 , 4);
    c1.print();
    return 0;
}