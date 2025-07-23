#include<bits/stdc++.h>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void setr(int);
    void getr();
};
void student :: setr(int a){
    roll = a;
}
void student :: getr(){
    cout<<"Roll No. of student is : "<<roll<<endl;
}
class exam : public student{
    protected:
    int science , maths , english , social_studies , sanskrit;
    public:
    void setm(int , int , int , int , int);
    void getm();
};
void exam :: setm(int a , int b , int c , int d , int e){
    science = a ;
    maths = b;
    english = c;
    social_studies = d;
    sanskrit = e;
}
void exam :: getm(){
    cout<<"Marks of student in science is : "<<science<<endl;
    cout<<"Marks of student in maths is : "<<maths<<endl;
    cout<<"Marks of student in english is : "<<english<<endl;
    cout<<"Marks of student in social_studies is : "<<social_studies<<endl;
    cout<<"Marks of student in sanskrit is : "<<sanskrit<<endl;
}
class result : public exam{
    protected:
    int Percentage;
    public:
    void display(){
        cout<<"Total Percentage of Roll No. "<<roll<<" in Class 10th is : "<<
        (float)(science + maths + english + social_studies + sanskrit) / 5<<"%"<<endl;;
    }
};
int main() {
    result r1;
    r1.setr(23118045);
    r1.getr();
    r1.setm(91 , 100 , 96 , 94 , 100);
    r1.getm();
    r1.display();
    return 0;
}