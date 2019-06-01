/* -------------------- Binary Search Program --------------- */

#include <iostream>
using namespace std;
int main()
{
    int LIST[25], MAX;
    int first, last, middle, i, item, loc = -1;
    cout << "how many elements";
    cin >> max;
    cout << "Enter the array elements in ascending order :";
    for (i = 0; i < max; i++)
    {
        /* code */
        cin >> list[i];
    }

    cout << "Enter the item needed to be searched : ";
    cin >> item;
    first = 0;
    last = max - 1;
    while (first <= last)
    {
        /* code */
        middle = (first + last) / 2;
        if (item == list[middle])
        {
            /* code */
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }

    if (loc != -1)
    {
        /* code */
        cout << "The item is found at position : " << loc + 1;
    }
    else
    {
        cout << "The item is not found inside the array.....";
    }

    return 0;
}

/* ++++++++++++++++++++++ Binary Search Algorithm +++++++++++++++++++++++ */

// 1    Start
// 2    Accept a value in max as the number of elements of the array
// 3    Accept MAX no of elements into the array
// 4    Store the position of the first element of the list in FIRST and that of last in LAST
// 5    Repeat steps 7 to 11 while (first<=last)
// 6    Find the middle positon using the formula (first+last)/2 and store it in middle
// 7    Compare the search value in ITEM with the element at the middle of the list
// 8    If the middle element contains the search value in item then stop search,display the position and go to Step 12
// 9    If the search value is smaller than the middle element
// 10   Then set LAST=MIDDLE-1
// 11   if the search value is larger than the middle element
// 12   Then set FIRST=MIDDLE+1
// 13   Stop

/* +++++++++++++++++++++++++++++++++++End +++++++++++++++++++++++++++++++++ */