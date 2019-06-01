/* -------------------- Array Traversal --------------- */

#include <iostream>
using namespace std;
int main()
{
    int a[10], i;
    cout << "Enter the elements of the array";
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < 10; i++)
    {
        a[i] = a[i] + 1;
    }
    cout << "\nEntered elements of the array are ....\n";
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    return 0;
}

/* Array Traversal - It basically means that the use of elements of the array for atleast once */