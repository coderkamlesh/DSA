/*
    SEGREGATE 0S AND 1S (Two-Pointer Technique)
    
    Problem Statement:
    Humein ek array di gayi hai jisme sirf 0 aur 1 hain.
    Humein 0s ko shuru mein aur 1s ko last mein laana hai bina sorting algorithm ke 
    (O(N) time complexity mein).

    Logic:
    1. Ek pointer 'start' shuru mein rakho aur 'end' last mein.
    2. Start pointer tabtak aage badhao jabtak usse '0' mil raha hai.
    3. End pointer tabtak peeche lao jabtak usse '1' mil raha hai.
    4. Agar 'start' pe 1 aur 'end' pe 0 mil jaye (jabki start < end ho), toh unhe 'swap' kar do.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void segregate(int arr[], int n) {
    int start = 0, end = n - 1;
    
    while (start < end) {
        // Agar start pe 0 hai, toh koi tension nahi, aage badho
        if (arr[start] == 0) {
            start++;
        } 
        else {
            // Agar start pe 1 mil gaya, toh check karo end wala 0 hai kya
            if (arr[end] == 0) {
                swap(arr[start], arr[end]);
                start++;
                end--;
            } 
            else {
                // Agar end pe bhi 1 hai, toh end ko peeche lao 0 dhundhne ke liye
                end--;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {0, 1, 0, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    segregate(arr, n);

    cout << "Array after Segregation: ";
    printArray(arr, n);

    return 0;
}
