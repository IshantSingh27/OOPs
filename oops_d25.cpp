#include<bits/stdc++.h>
using namespace std;
class student{
    protected:
    int roll_no = 0;
    public:
    void setroll(int n){
        roll_no = n;
    }
    void showroll(void){
        cout<<"Student's Roll number is : "<<roll_no<<endl;
    }
};
class test : virtual public student{
    protected:
    float c10 = 0 , c12 = 0;
    public:
    void setm(float n , float m){
        c10 = n;
        c12 = m;
    }
    void showm(void){
        cout<<"Student's marks in class 10th is : "<<c10<<endl;
        cout<<"Student's marks in class 12th is : "<<c12<<endl;
    }
};
class sports : virtual public student{ //used to remove ambiguity of fetching student class
    protected:                          // as both class test , sports inherit same class
    int score = 0;
    public:
    void setscore(int n){
        score = n;
    }
    void showscore(void){
        cout<<"Student's sports score is : "<<score<<endl;
    }
};
class result : public test , public sports{
    protected:
    float total = 0;
    public:
    void display(void){
        total = c10 + c12 + score;
        showroll();
        showm();
        showscore();
        cout<<"Your Total Score is : "<<total<<endl;
    }
};
int main() {
    result ishant;
    ishant.setroll(23118045);
    ishant.setscore(85);
    ishant.setm(90.2 , 96.2);
    ishant.display();

    return 0;
}