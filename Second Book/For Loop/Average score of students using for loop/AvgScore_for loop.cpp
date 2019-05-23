#include<iostream>
using namespace std;
int main()
{
 int sum=0,score,n,i;
floatavg;
 cout<<"how many students:";
 cin>>n;
 for ( i = 1; i < sum; ++i)
 {
    cout<<"Enter the score of student"<<i<<":";
    cin>>score;
    sum=sum+score;
 }
 avg=(float)sum/n;
 cout<<"Class Average:"<<avg;
  return 0;
}