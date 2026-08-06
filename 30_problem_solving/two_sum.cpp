#include <iostream>
using namespace std;

void searchPair(int a[], int n, int i, int j, int target);

int main()
{
    int n, target;

    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value for a[" << i << "]: ";
        cin >> a[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    searchPair(a, n, 0, 1, target);

    return 0;
}

void searchPair(int a[], int n, int i, int j, int target)
{
    if (i >= n - 1)
    {
        cout << "No pair found" << endl;
        return;
    }

    if (j >= n)
    {
        searchPair(a, n, i + 1, i + 2, target);
        return;
    }

    if (a[i] + a[j] == target)
    {
        cout << "The sum of two elements is "
             << a[i] << " and " << a[j] << endl;

        cout << "The index of these elements is a["
             << i << "] and a[" << j << "]" << endl;

        return;
    }

    searchPair(a, n, i, j + 1, target);
}