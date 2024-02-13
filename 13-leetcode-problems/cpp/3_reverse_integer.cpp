// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter Integer: ";
//     cin >> n;
//     int ans = 0, rem;
//     while (n)
//     {
//         rem = n % 10;
//         n = n / 10;
//         ans = ans * 10 + rem;
//     }
//     if (ans > INT_MAX / 10)
//     {
//         cout << "0";
//     }
//     else if (ans < INT_MIN / 10)
//     {
//         cout << "0";
//     }
//     else
//     {
//         cout << "reverse is: " << ans;
//     }

//     return 0;
// }

// another approach
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter Integer: ";
    cin >> n;

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

    cout << "Reverse is: " << ans << endl;

    return 0;
}
