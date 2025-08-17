#include<bits/stdc++.h>
using namespace std;

class cwh{
    protected:
    string s;
    float rating;
    public:
    cwh(string s , float r){
        this->s = s;
        rating  = r;
    }

    virtual void show(){ // virtual class is needed for derived class display functions to run;
        cout<<"NULL displaying."<<endl;
    }
};

class cwhvideo : public cwh{
    protected:
    float len;
    public:
    cwhvideo(string s , float r , float n) : cwh(s , r){
        len = n;
    }

    void show(){
        cout<<"Title of video is : "<<s<<endl;
        cout<<"Rating of video is : "<<rating<<" / 5"<<endl;
        cout<<"Total length of video is : "<<len<<endl;
    }
};

class cwhtext : public cwh{
    protected:
    int topic;
    public:
    cwhtext(string s , float r , float n) : cwh(s , r){
        topic = n;
    }

    void show(){
        cout<<"Title of video is : "<<s<<endl;
        cout<<"Rating of video is : "<<rating<<" / 5"<<endl;
        cout<<"Total topics in the video is : "<<topic<<endl;
    }
};

int main() {
    string title;
    float rating , len;
    int topic;

    title = "Ishant is gr8.";
    rating = 4.91;
    len = 18.7;
    topic = 7;
    cwhvideo ish(title , rating , len);
    ish.show();

    cwhtext mri(title , rating , topic);
    mri.show();

    cwh* fri[2];

    fri[0] = &ish;
    fri[1] = &mri;

    fri[0]->show();
    fri[1]->show();

    return 0;
}