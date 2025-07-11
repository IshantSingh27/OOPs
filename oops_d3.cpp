#include<bits/stdc++.h>
using namespace std;
class shop{ // using arrays in classes
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void init(void){ counter = 0; }
    void set(void);
    void get(void);
};
void shop :: set(void){
    cout<<"Enter id of product : ";
    cin>>itemid[counter];
    cout<<"Enter price of product having id " << itemid[counter] <<" : ";
    cin>>itemprice[counter];
    counter++;
}
void shop :: get(void){
    for(int i=0 ; i<counter ; i++){
        cout<<"Price of product having id "<<itemid[i]<<" is : "<<itemprice[i]<<endl;
    }
    cout<<"Total number of products is : "<<counter<<endl;
}
int main() {
    shop duk;
    duk.init();
    duk.set(); duk.set(); duk.set();
    duk.get();
    return 0;
}