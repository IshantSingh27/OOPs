#include<bits/stdc++.h>
using namespace std;
class num{
    static int cnt;
    public:
    num(){
        cnt++;
        cout<<"Constructor called for obj : "<<cnt<<endl;
    }
    ~num(){
        cout<<"Destructor called for obj : "<<cnt<<endl;
        cnt--;
    }
};//Static members exist once for the entire class, not per object.
int num :: cnt = 0; //If allowed inside the class, it would mean defining it multiple times if the header is
int main() { // included in many .cpp files. That would break the One Definition Rule (ODR) in C++.
    num n1;
    cout<<"obj is created"<<endl;
    {
        cout<<"2 obj is created"<<endl;
        num n2 , n3;
    }
    cout<<"Exiting the block of code."<<endl;
    return 0;
}