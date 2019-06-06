#include <iostream>
using namespace std;
int main()
{
    int m, n, row, col, mat[10][10];
    cout << "Enter the order of the matrix";
    cin >> m >> n;

    cout << "Enter the elements of the matrix";
    for (row = 0; row < m; m++)
    {
        /* code */
        for (col = 0; col < n; col++)
        {
            /* code */
            cin >> mat[row][col];
        }
    }
    cout << "The given matrix is";

    for (row = 0; row < m; m++)
    {
        /* code */
        for (col = 0; col < n; col++)
        {
            /* code */
            cout << endl;
            cout << mat[row][col];
        }
    }
    return 0;
}
