#include <iostream>
using namespace std;
void Binary(int);
int main()
{
    int decimal;
    cout << "Enter an integer number :";
    cin >> decimal;
    cout << "Binary Equivallent of " << decimal << "is ";
    Binary(decimal);
    return 0;
}

void Binary(int n)
{
    if (n > 1)
        Binary(n / 2);
    cout << n % 2;
}