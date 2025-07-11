#include<bits/stdc++.h>
using namespace std;
class employee{
    int id;
    static int count; //universal variable used by all objects in sync way
    public:         //also give assurance that count is defined below
    void set(void){
        cout<<"Enter id : ";
        cin>>id;
        count++; //changes made globally
    }
    void get(void){
        cout<<"Employee id is : "<<id<<endl;
    }
    static void getcount(void){ //access only static variable
        cout<<"total employee are : "<<count<<endl; //no cout<<id; as not static
    } //do not need object creation for running
};
int employee :: count; //initialize count with 0
int main() {
    employee ish; employee mri; employee avi;
    ish.set(); ish.get(); employee::getcount();
    mri.set(); mri.get(); employee::getcount();
    avi.set(); avi.get(); employee::getcount();
    return 0;
}