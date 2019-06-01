/* -------------------- Print the largest integers --------------- */

#include <iostream>
using namespace std;
int main()
{

    int num, big, count;

    cout << "How many numbers are there in the list:";
    cin >> count;
    cout << "Enter the first number";
    cin >> num;
    big = num;
    for (int i = 2; i < count; i++)
    {
        cout << "enter the next number";
        cin >> num;
        if (num > big)
        {
            big = num;
        }
    }
    cout << "The largest number here is :" << big;
    return 0;
}

/* --------------- ++++++++ --------------- */
