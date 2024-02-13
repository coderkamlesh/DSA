#include <iostream>
using namespace std;
#include <climits>

int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;
    int originalN = n;
    if (n < 0)
    {
        cout << "Not Pelindrome";
        return 0;
    }
    else
    {
        int ans = 0, rem;
        while (n)
        {
            rem = n % 10;
            n = n / 10;

            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && rem > 7))
            {
                cerr << "Overflow Error: Reversing the integer causes overflow\n";
                return 1; // Exit with an error code
            }
            else if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && rem < -8))
            {
                cerr << "Overflow Error: Reversing the integer causes overflow\n";
                return 1; // Exit with an error code
            }

            ans = ans * 10 + rem;
        }

        if (ans == originalN)
        {
            cout << "Pellindrome";
        }
        else
        {
            cout << "Not pelindrome";
        }
    }
}