#include<iostream>
using namespace std;
int main()
{
    int score;
    cout<<"Enter your Score between 0-10";
    cin>>score;
    switch (score/10)
    {
    case 10:
    case 9: case 8:cout<<"A grade";break;
    case 7: case 6:cout<<"B grade";break;
    case 5: case 4:cout<<"C grade";break;
    case 3:cout<<"D grade";break;
        
    
    default:cout<<"D grade";break;
        break;
    }
    cout<<"hello, welcome to c++";
    return 0;
}
