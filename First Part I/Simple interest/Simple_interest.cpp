#include<iostream>
using namespace std;
int main()
{
    
    float p_amount,n_year,i_rate,int_amount;
    cout<<"enter the amount in rupees";
    cin>>p_amount;
    cout<<"enter the number of years for investment";
    cin>>n_year;
    cout<<"enter the rate of interest rate in percentages";
    cin>>i_rate;
    int_amount=(p_amount*n_year*i_rate)/100
    cout<<"Simple interest for the principal amount"<<p_amount;
    cout<<"ruppes for a period of"<<n_year;
    cout<<"years at the rate of interest"<<i_rate;
    cout<<"is :"<<int_amount;
    cout<<"ruppes";
    return 0;
}