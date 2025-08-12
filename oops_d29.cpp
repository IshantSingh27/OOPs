#include<bits/stdc++.h>
using namespace std;

int main() {
    float *p = new float(7.77);
    cout<<"value of p is : "<<(*p)<<endl;

    int *arr = new int[3];
    arr[0] = 7;
    *(arr + 1) = 18;
    *(arr + 2) = 45;

    cout<<" values in array are : ";
    for(int i=0 ; i<3 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    delete[] arr;

    cout<<"Now, values in array are : ";
    for(int i=0 ; i<3 ; i++){
        cout<<arr[i]<<" ";
    } // sometime you might se old value but it is deleted;
    cout<<endl;

    return 0;
}