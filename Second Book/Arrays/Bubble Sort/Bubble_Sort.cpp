/* -------------------- Bubble Sort Program --------------- */

#include <iostream>
using namespace std;
int main()
{
    int AR[25], N;
    int i, j, TEMP;
    cout << "How many elements";
    cin >> N;
    cout << "Enter the array elements";

    for (i = 0; i < N; i++)
    {
        /* code */

        cin >> AR[i];

        // Letting the code in the array using the loop
    }

    for (i = 0; i < N; i++)
    {
        /* Sorting using bubble sort */
        for (j = 0; i < N - i; i++)

            TEMP = AR[j];
        AR[j] = AR[j + 1];
        AR[j + 1] = TEMP;
    }
    cout << "Sorted array is :";
    for (i = 0; i < N; i++)
    {
        /* code */
        cout << AR[i] << "\t";
    }
}

return 0;
}

/* ++++++++++++ This program is used to sort an array using Bubble Sort ++++++++++++ */

//  Start
//  Accept N as the number of elements of the arrau
//  Accept N elements into the array AR
//  Repeat steps 5 to 7 N-1 times
//  Repeat the step 6 untill the second last element of the list
//  Starting from the first position compare two adjacent elements in the list. if they are not in the proper order,Swap the elements
//  Revise the list by excluding the last element in the current list
//  Print the sorted array
//  Stop

/* -------------------------------------------------------- */