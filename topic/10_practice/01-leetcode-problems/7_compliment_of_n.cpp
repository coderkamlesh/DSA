#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    if (n == 0)
    {
        return 1;
    }
    int ans = 0, rem;
    long long mul = 1;

    while (n)
    {
        rem = n % 2;
        rem = rem ^ 1;
        n = n / 2;
        ans = ans + rem * mul;
        mul = mul * 2;
    }
    cout << ans;
    return 0;
}