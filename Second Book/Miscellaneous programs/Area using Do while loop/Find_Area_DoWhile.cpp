#include<iostream>
using namespace std;
int main()
{
 float length,breadth,area;
 char ch;
  do{
      cout<<"Enter length and breadth";
      cin>>length>>breadth;
      area=length*breadth;

       cout<<"Area="<<area;
        cout<<"Any more rectangle(Y/N)";
        cin>>ch;

  }while(ch=='y'||ch=='Y');
  


  return 0;
}