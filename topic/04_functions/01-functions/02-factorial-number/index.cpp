// Question: Ek number n diya gaya hai, uska Factorial nikalo.
// Factorial of n = 1 * 2 * 3 * ... * n
// Example: factorial(5) = 1 * 2 * 3 * 4 * 5 = 120

#include <iostream>
using namespace std;

int factorialNumber(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{

    cout << factorialNumber(10);

    return 0;
}