#include <iostream>
using namespace std;
int main()
{
    char str[20];
    int vow = 0;
    cout << "Enter a string :";
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        /* code */
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vow++;
        }
    }

    cout << "No.of vowels in the string " << str << "is" << vow;
    return 0;
}
