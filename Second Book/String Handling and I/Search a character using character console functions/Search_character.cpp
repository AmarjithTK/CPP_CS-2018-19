#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    char str[20], ch;
    int i, num == 0;
    puts("Enter a string");
    gets(str);
    cout << "Enter the character to be searched :";
    ch = getchar();
    for (i = 0; str[i] != '\0'; i++)
    {
        /* code */
        if (str[i] == ch)
        {
            /* code */
            num++;
        }
    }
    cout << "The string\'" << str << "\' uses the character\'";
    putchar(ch);
    cout << "\'" << num << "times";

    return 0;
}
