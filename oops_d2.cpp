#include<bits/stdc++.h>
using namespace std;
class binary{
    private:
    string s;
    void check(void); //private function
    public:
    void read(void);
    void ones_comp(void);
    void display(void);
};
void binary :: check(void){
    for(int i=0 ; i<s.size() ; i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Not a valid binary string."<<endl;
            exit(0);
        }
    }
}
void binary :: read(void){
    cout<<"Enter a binary string : ";
    cin>>s;
}
void binary :: ones_comp(void){
    check(); //nested functions privately accessed
    for(int i=0 ; i<s.size() ; i++){
        if(s.at(i) == '0'){
            s[i] = '1';
        }
        else{
            s[i] = '0';
        }
    }
}
void binary :: display(void){
    cout<<"Ones complement of given binary string is : "<<s<<endl;
}
int main() {
    binary b;
    b.read();
    b.ones_comp();
    b.display();
    return 0;
}