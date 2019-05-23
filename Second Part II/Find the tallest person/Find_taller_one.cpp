#include<iostream>
using namespace std;
int main()
{
    int h1,h2;
    cout<<"Enter the heights of two students:";
    cin>>h1>>h2;

    if(h1<h2){
         cout<<"Student with height"<<h1<<"is taller";
    }
     else{
       cout<<"Student with height"<<h2<<"is taller";
    }
   
    return 0;
}