#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year in 4 digits";
    cin>>year;
    if(year%100==0){
      if(year%400==0){
        cout<<"Leap year";
        else
        cout<<"not an leap year"; 
    }  
    }
    else if(year%4==0){
        cout<<"Leap year";
    }
    else{
        cout<<"not a leap year";
    }
    return 0;
}

