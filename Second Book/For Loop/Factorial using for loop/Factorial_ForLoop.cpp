#include<iostream>
using namespace std;
int main()
{
 int n,i;
 long fact=1;
 cout<<"Enter the number:";
 cin>>n;
 for ( i = 1; i < n; ++i)
 {
    
   fact=fact*i;
 }
 cout<<"Factorial of "<<n<<"is"<<fact;
 return 0;
}