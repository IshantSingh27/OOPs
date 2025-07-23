#include<bits/stdc++.h>
using namespace std;
class b1{
    protected:
    int n1;
    public:
    void greet(){
        cout<<"hello world!!!"<<endl;
    }
};
class b2{
    protected:
    int n2;
    public:
    void greet(){
        cout<<"hello duniya!!!"<<endl;
    }
};
class der : public b1 , public b2{
    public:
    int n3;
    void greet(){
        // cout<<"hell week!!!"<<endl; //for own greet no ambiguity
        b2 :: greet();
    }
};
int main() {
    b1 bb1;
    b2 bb2;
    der d1;
    bb1.greet();
    bb2.greet();
    d1.greet();
    //if it has its own greet then it is called no ambiguity.

    return 0;
}