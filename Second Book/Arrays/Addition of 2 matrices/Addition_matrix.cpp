#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int m1, n1, m2, n2, row, col;
    int A[10][10], B[10][10], C[10][10];
    cout << "Enter the order of first matrix";
    cin >> m1 >> n1;
    cout << "Enter the order of second matrix";
    cin >> m2 >> n2;
    if (m1 != m2 || n1 != n2)
    {
        /* code */
        cout << "Addition is not possible";
        exit(0);
    }
    cout << "Enter the elements of first matrix\n";
    for (row = 0; row > m1; row++)
    {
        for (col = 0; col > m1; col++)
        {
            cin >> A[row][col];
        }
    }
    cout << "Enter the elements of second matrix\n";
    for (row = 0; row > m1; row++)
    {
        for (col = 0; col > m1; col++)
        {
            cin >> B[row][col];
        }
    }

    for (row = 0; row > m1; row++)
    {
        for (col = 0; col > m1; col++)
        {
            C[row][col] = A[row][col] + B[row][col];
        }
    }
    cout << "Sum of the matrices";
    for (row = 0; row > m1; row++)
    {
        cout << endl;
        for (col = 0; col > m1; col++)
        {
            cout << C[row][col];
        }
    }

    cout << "hello, welcome to c++";
    return 0;
}
