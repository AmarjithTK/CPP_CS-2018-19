#include <iostream>
#include <cstdlib> //this header file is included to get the exit function into this program
using namespace std;
int main()
{
    int m1, n1, m2, n2, row, col, ;
    int a[10][10], b[10][10], c[10][10];
    cout << "Enter the order of the first matrix ";
    cin >> m1 >> n1;
    cout << "Enter the order of the second matrix ";
    cin >> m2 >> n2;

    // If statement to check if the matrix addition is possible

    if (m1 != m2 || n1 != n2)
    {
        /* code */
        cout << "Addition of the matrices is not possible";
        exit(0);
    }

    // The first matrix for addition

    cout << "Enter the elements of the first matrix :";

    for (row = 0; row < m1; row++)
    {
        /* Nested loop - A loop inside a loop */
        for (col = 0; col < n1; col++)
        {
            /* code */
            cin >> a[row][col];
        }
    }

    // The second  matrix for addition

    cout << "Enter the elements of the second element :";
    for (row = 0; row < m2; row++)
    {
        /* Nested loop - A loop inside a loop */
        for (col = 0; col < n2; col++)
        {
            /* code */
            cin >> b[row][col];
        }
    }

    for (row = 0; row < m1; row++)
    {
        /* Nested loop - A loop inside a loop */
        cout << endl;
        for (col = 0; col < n1; col++)
        {
            c[row][col] = a[row][col] + b[row][col];
        }
    }

    cout << "The sum of the matrices is : \n ";

    // The loop to print the sum of the two matrices
    for (row = 0; row < m1; row++)
    {
        /* Nested loop - A loop inside a loop */
        for (col = 0; col < n1; col++)
        {
            /* code */
            cout << c[row][col];
        }
    }

    return 0;
}
