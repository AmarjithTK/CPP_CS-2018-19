#include <iostream>
using namespace std;
int cb; // A global variable . Like Robert Downey Jr
void test()
{
    int cube(int n);
    cb = cube(x); // invalid call indication by vscode editor
    cout << cb;
}
int main() // main function

{
    int x = 5; // local variable . like Mohanlal
    test();
    cb = cube(x);
    cout << cb;
    return 0;
}

int cube(int n) // local variable cause its a argument
{
    int cb;
    cout << "The value of X is passed to n is" << x;
    cb = n * n * n;
    return cb;
}
