#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter The number: ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Hello Mohit" << endl;
        break;
    case 2:
        cout << "Hello Krishna" << endl;
    default:
        cout << "Hello From space";
    }

    return 0;
}