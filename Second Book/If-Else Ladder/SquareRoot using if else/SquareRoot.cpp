#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 float a,b,c,root1,root2,d;
 cout<<"Enter the three coefficients :";
 cin>>a>>b>>c;
 
if(!a) // equivallent to a==o
  {
cout<<"Value of \'a\' shouldn't be zero"<<"aborting";
  }

else
  {
    
    d=b*b-(4*a*c);
    if (d>0)
    {
        /* code */
        root1=(-b+sqrt(d))/(2*a);
        root1=(-b-sqrt(d))/(2*a);
        cout<<"Roots are real and unequal\n";
        cout<<"Root1="<<root1<<"\tRoot2="<<root2;
    }
    else if
    {
        root1=(-b)/(2*a);
        cout<<"Roots are real and unequal\n";
        cout<<"Root1="<<root1;
    }
    else
    {
        cout<<"Roots are complex and imaginary";
    }
    
    
    
  }


  return 0;
}