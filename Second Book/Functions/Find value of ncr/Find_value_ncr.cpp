#include <iostream>
using namespace std;
int fact(int); // Prototype of the function
int main()
{
    int n, r;
    int ncr;
    cout << "Enter the values of n and r :";
    cin >> n >> r;
    ncr = fact(n) / (fact(r) * fact(n - r));
    cout << n << "C" << r << "=" << ncr;
    return 0;
}

int fact(int n)
{
    int f;
    for (f = 1; n > 0; n--)
        f = f * n;
    return f;
}
