#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;
int main()
{
    char text[80];
    int ucase = 0, lcase = 0, digit = 0, i;
    cout << "Enter a line of text :";
    gets(text);
    for (i = 0; text[i] != '\0'; i++)
    {
        /* code */
        if (isupper(text[i]))
            ucase++;
        else if (islower(text[i]))
            lcase++;
        else if (isdigit(text[i]))
            digit++;
    }
    cout << "\n.No.of uppercase letters :" << ucase;
    cout << "\nNo.of lowercase letters :" << lcase;
    cout << "\n.No.of digits :" << digit;
    cout << "\n.The string in the uppercase form is : \n";
    i = 0;
    while (text[i] != '\0')
    {
        /* code */
        putchar(toupper(text[i]));
        i++;
    }
    cout << "\nThe string in lowercase form is \n";
    i = 0;
    do
    {
        putchar(tolower(text[i]));
        i++;
        /* code */
    } while (text[i] != '\0');

    cout << "hello, welcome to c++";
    return 0;
}
