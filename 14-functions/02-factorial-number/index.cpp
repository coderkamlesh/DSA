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