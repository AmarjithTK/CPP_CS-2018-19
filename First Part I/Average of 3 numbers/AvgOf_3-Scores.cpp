#include<iostream>
using namespace std;
int main()
{
    int score1,score2,score3;
    float avg;
    cout<<"Enter the scores";
    cin>>score1>>score2>>score3;
    avg=(score1+score2+score3)/3.0;
    cout<<"The average of the scores is :"<<avg;
    return 0;
}