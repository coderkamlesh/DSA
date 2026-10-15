#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter The Number: ";
    cin >> num;

    if (num < 1)
    {
        cout << "False";
    }

    while (num != 1)
    {
        if (num % 2 == 1)
        {
            cout << "false";
            return 0;
        }
        else
        {
            num = num / 2;
        }
    }
    cout << "true";
    return 0;
}