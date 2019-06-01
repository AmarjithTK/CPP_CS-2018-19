/* This program is used to create a matrix and accept its values and print its output */

#include <iostream>
using namespace std;
int main()
{
    int m, n, row, col, mat[10][10];
    cout << "Enter the order of the matrix";
    cin >> m >> n;
    cout << "Enter the elements of the matrix";

    // This couple of loop is created to accept the elements of the matrix
    for (row = 0; row < m; row++)
    {
        /* Nested loop - A loop inside a loop */
        for (col = 0; col < n; col++)
        {
            /* code */
            cin >> mat[row][col];
        }
    }

    cout << "The given matrix is :";
    for (row = 0; row < m; row++)
    {
        /* Nested loop - A loop inside a loop */
        cout << endl;
        for (col = 0; col < n; col++)
        {
            cout << mat[row][col] << "\t";
        }
    }

    return 0;
}
