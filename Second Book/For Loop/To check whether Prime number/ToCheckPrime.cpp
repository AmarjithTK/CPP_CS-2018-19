#include<iostream>
#include<csdlib>
using namespace std;
int main()
{
 int i,num;
 cout<<"Enter the number :";
 cin>>num;
 for ( i = 2; i < num; ++i)
 {
     /* code */
     if (num%i==0)
     {
         /* code */
         cout<<"Not a prime number";
         exit(0);
     }
     
 }
 
 cout<<"Prime number";
 return 0;
}