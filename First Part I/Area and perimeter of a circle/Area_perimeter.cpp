#include<iostream>
using namespace std;
int main()
{
    const float pi=22/7;
    float radius,area,perimeter;
    cout<<"Enter the radius of the circle";
    cin>>radius;
    area=pi*radius*radius;
    perimeter=2*pi*radius;
    cout<<"Area of this circle is "<<area;
    cout<<"Perimeter of the circle is  "<<perimeter;
    return 0;
}