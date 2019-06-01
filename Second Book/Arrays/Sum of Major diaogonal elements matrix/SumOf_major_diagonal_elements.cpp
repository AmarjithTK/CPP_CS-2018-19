#include <iostream>
using namespace std;
int main()
{

    int mat[10][10], n, i, j, s = 0;

    cout << "Enter the elements\n";
    cin >> n;
    cout << "Enter the elements";
    for (i = 0; i < n; i++)
    {
        /* code */
        for (j = 0; j < n; j++)
        {
            /* code */
            cin >> [i][j];
        }
    }

    cout << "Major diagonal elements are \n";
    for (i = 0; i < n; i++)
    {
        /* code */
        cout << mat[i][i];
        s = s + mat[i][i];
    }
    cout << "\n The sum of major diagonal elements of a matrix is :" << s;
    return 0;
}
