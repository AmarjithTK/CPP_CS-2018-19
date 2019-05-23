#include<iostream>
using namespace std;
int main()
{
  int score;
  cout<<"enter your score in computer science";
  cin>>score;
  if(score>=18){
      cout<<"you have passed";
      if(score>=54){
          cout<<"with A+ Grade";
      }
  }
  else{
      cout<<"\n you have passed";
  }
  return 0;
}
