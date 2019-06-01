/* -------------------- Linear Search Program --------------- */

#include <iostream>
using namespace std;
int main()
{
    int AR[i], N;
    int i, ITEM, LOC = -1;
    cout << "How many elements";
    cin >> N;
    cout << "Enter the array elements";
    for (i = 0; i < N; i++)
    {
        /* code */
        cin >> AR[i];
    }
    cout << "Enter the item that you have been searching for";
    cin >> ITEM;
    for (i = 0; i < N; i++)
    {
        /* code */
        if (AR[i] == ITEM)
        {
            /* code */
            loc = i;
            break;
        }
    }

    if (LOC != -1)
    {
        /* code */
        cout << "The item is found at position" << loc + 1;
    }
    else
    {
        /* code */
        cout << "The item is not found inside the array" << '\n';
    }

   
    return 0;
}

/* -----------Linear Search algorithm ---------------------*/

//  Start
//  Accept n as the number of elements in the array
//  Accept n number of elements into the array
//  Accept the value to be searched in the array
//  set LOC=-1
//  Starting from the first position repeat the step 7 until the last element
//  Check whether the value of ITEM is found in the current position . if found then store the position in LOC and go to step 8. Else move on to next position
//  If the value of LOC is less than 0 then display "Not found " else display the value of LOC+1 as the position of search value.
//  Stop

/* ======================================================== */