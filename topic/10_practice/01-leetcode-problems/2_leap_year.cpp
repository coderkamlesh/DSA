#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Provide year: ";
    cin >> N;
    if (N % 400 == 0)
    {
        cout << "Leap year";
    }
    else if (N % 4 == 0 && N % 100 != 0)
    {
        cout << "Leap year";
    }
    else
    {
        cout << "Not Leap year";
    }
}