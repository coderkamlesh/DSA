#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        }

    return 1;
}

int main()
{

    cout << isPrime(10);

    return 0;
}