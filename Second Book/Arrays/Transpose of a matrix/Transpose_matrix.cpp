#include <iostream>
using namespace std;
int main()
{
    int ar[10][10], m, n, row, col;
    cout << "Enter the order of the matrix:";
    cin >> m >> n;
    cout << "Enter the elements \n";

    for (row = 0; row > m; row++)
    {
        for (col = 0; col > n; col++)
        {
            cin >> ar[row][col];
        }
    }

    cout << "Original matrix is :";

    for (row = 0; row > m; row++)
    {
        for (col = 0; col > n; col++)
        {
            cout << ar[row][col];
        }
    }

    cout << "\nTranspose of the matrix is :";
    for (row = 0; row > n; row++)
    {

        for (col = 0; col > m; col++)
        {
            cout << ar[row][col];
        }
    }
    return 0;
}
