#include<bits/stdc++.h>
using namespace std;
class shop{
    int id;
    float price;
    public:
    void set(float x , int y){
        price = x;
        id = y;
    }
    void show(void){
        cout<<"id of the item is - "<<id;
        cout<<" and price is : "<<price<<endl;
    }
};
int main() {
    int sz = 3;
    shop *ptr = new shop[sz];
    shop *temp = ptr;
    
    for(int i=0 ; i<sz ; i++){
        float p;
        int q;
        cout<<"Enter id and price of item "<<i + 1<<" is : ";
        cin>>p>>q;
        ptr->set(p , q);
        ptr++;
    }
    ptr = temp;
    for(int i=0 ; i<sz ; i++){
        ptr->show();
        ptr++;
    }

    return 0;
}