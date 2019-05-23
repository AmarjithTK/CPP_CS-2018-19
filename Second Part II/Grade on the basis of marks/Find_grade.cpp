#include<iostream>
using namespace std;
int main()
{

    int score;
    cout<<"Enter your score";
    cin>>score;
    if(score>=80){
        cout<<"A Grade";
    }
    else if(score>=60){
        cout<<"B Grade";
    }
    else if(score>=40){
        cout<<"C Grade";
    }
    else if(score>=30){
        cout<<"D Grade";
    }
    else{
        cout<<"E Grade";
    }
    return 0;
}
