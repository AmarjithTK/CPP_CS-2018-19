//Recursive functions example

/* int function1()
{
    -----------------
    -----------------
    int n = function();
    -----------------
    -----------------
    -----------------
} */

// Factorial of a number using recursive functions

int Factorial(int n)
{
    if ((n == 0) || (n == 1))
        return 1;
    else if
        return (n * Factorial(n - 1));
    else
        return 0;
}

int main()
{
    int x;
    cout << "Enter a number :";
    cin >> x;
    cout << Factorial(x);
}