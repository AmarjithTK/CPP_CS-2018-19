

// Header file creation in cpp

int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

// Save this as  header_filename.h

// I'm taking it as factorial.h

/* 


#include <iostream>
#include "factorial.h";
using namespace std;
int main()
{

    int n;
    cout << "Enter a number :";
    cin >> n;
    cout << "Factorial :" << factorial(n);
}


 */