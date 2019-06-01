/* -------------------- Selection Sort Program --------------- */

#include <iostream>
using namespace std;
int main()
{
    int AR[25], N, I, J, MIN, POS;

    cout << "How many elements";
    cin >> N;
    cout << "Enter the array elements";
    for (int i = 0; i < N; i++)
    {
        /* code */

        MIN = AR[i];
        POS = I;
        for (j = i + 1; J < N; J++)
        {
            /* code */
            if (AR[J] < MIN)

            {
                MIN = AR[J];
                POS = J;
            }
        }
        if (POS != I)

        {
            AR[POS] = AR[J];
            AR[i] = MIN;
        }
    }

    return 0;
}

/* ++++++++++++ The algorithm if you want to have a reference to it +++++++++++++++ */

// 1 Start
// 2 Accept a value N as the number of the elements of the array
// 3 Accept n number of elements into the array
// 4 Repeat steps 5-9 n-1 times
// 5 Assume the first  element as the smallest and store it in the MIN and its position in POS
// 6 Repeat the steps 7 until the last element of the list
// 7 Compare the next element in the list with the value of MIN . If its found to be smaller, store it in MIN and its position in POS
// 8 if the element in the list and the value in MIN are not the same then swap the first element with the element at position POS
// 9 Revise the list by excluding the first element in the current list
// 10 Print the sorted Array
// 11 Stop

/* +++++++++++++++++++++++++++++++++++End +++++++++++++++++++++++++++++++++ */
