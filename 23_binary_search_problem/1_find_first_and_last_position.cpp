#include<iostream>
#include<vector> // Vector use karna better hai arrays return karne ke liye
using namespace std;

// Vector use kar rahe hain taaki safety se return ho sake
void searchRange(int arr[], int n, int target, int ans[]) {
    int start = 0;
    int end = n - 1;
    int first = -1;
    int last = -1;
    int mid;

    // First position ke liye
    while (start <= end) {
        mid = start + (end - start) / 2; // Divided by 2 zaroori hai
        if (arr[mid] == target) {
            first = mid;
            end = mid - 1;
        } else if (arr[mid] < target) { // Ascending array ke liye Logic fix
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    // Last position ke liye
    start = 0;
    end = n - 1;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            last = mid;
            start = mid + 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    ans[0] = first;
    ans[1] = last;
}

int main() {  
    int arr[] = {1, 2, 3, 3, 3, 4, 5, 6, 33}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans[2]; 
    
    searchRange(arr, size, 3, ans);

    for (int i = 0; i < 2; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
