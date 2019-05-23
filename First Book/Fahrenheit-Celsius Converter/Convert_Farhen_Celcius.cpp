#include<iostream>
using namespace std;
int main()
{
    int option;
    float celsius,fahrenheit;
    cout<<"Press One or Two for respective options"
    cout<<"1) Fahrenheit to Celsius converter";
    cout<<"2) Celsius to Fahrenheit converter";
    cin>>option;
    if(option==1){
      cin>>fahrenheit;
      celsius=0.56*fahrenheit-32  
       cout<<"The equivallent temperature in Celsius is"<<celsius;
    }
    else{
        cin>>celsius;
        fahrenheit=1.8*celcius+32;
         cout<<"The equivallent temperature in fahrenheit is"<<fahrenheit;
    }
    
    return 0;
}