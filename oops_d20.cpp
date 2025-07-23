#include<bits/stdc++.h>
using namespace std;
class a{
    private:
    int a = 10;
    protected:
    int b = 20;
    public:
    int c = 30;
};
class b : protected a{
    public:
    int d = 40;
};
int main() {
    b b1;
    // cout<<b1.b<<endl; can't do it because protected is only inherited rest like private
    // cout<<b1.c<<endl; inherited as protected so can't access;
    // cout<<b1.b<<endl; protected so can't access;
    cout<<b1.d<<endl;
    return 0;
}