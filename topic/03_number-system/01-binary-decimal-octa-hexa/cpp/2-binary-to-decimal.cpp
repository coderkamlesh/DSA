#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int rem, mul = 1;
    int ans = 0;

    while (n > 0)
    {
        // rem
        rem = n % 10;
        // quotient
        n /= 10;
        // ans
        ans += rem * mul;
        // mul
        mul *= 2;
    }
    cout << ans;

    return 0;
}