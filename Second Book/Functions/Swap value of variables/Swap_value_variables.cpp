#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}
int main()
{
    int m, n;
    m = 10;
    n = 20;
    cout << "Before swapping m =" << m << "and n=" << n;
    swap(m, n);
    cout << "After swapping m =" << m << "and n=" << n;
    return 0;
}
