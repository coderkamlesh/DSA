/*
    BOOK ALLOCATION PROBLEM
    Problem Statement:
    Humare paas 'n' books hain, aur har book ke pages 'arr[i]' given hain.
    Humien 'm' students mein yeh books distribute karni hain such that:
    1. Har book kisi na kisi student ko assign honi chahiye.
    2. Ek book sirf ek hi student ko assign ho sakti hai.
    3. Books contiguous (ek ke baad ek) order mein hi assign karni hain.
    4. Maximum pages jo kisi student ko assign hue hain, wo MINIMUM hone chahiye.

    Logic using Binary Search:
    - Search Space: 
        - Minimum possible answer (s): 0 (ya max element in array).
        - Maximum possible answer (e): Sum of all pages in the array.
    - Hum 'mid' calculate karte hain aur check karte hain (`isPossible`) ki kya hum saari books 'm' students ko distribute kar sakte hain bina kisi ko 'mid' se zyada pages diye.
    - Agar possible hai, toh hum aur chota answer dhoondte hain (e = mid - 1).
    - Agar possible nahi hai, toh humein limit badhani padegi (s = mid + 1).
*/

#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

// Function to check if it's possible to allocate books such that no student gets more than 'mid' pages
bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < n; i++) {
        // Agar current book ke pages hi 'mid' se zyada hain, toh cannot allocate
        if (arr[i] > mid) return false;

        if(pageSum + arr[i] <= mid) {
            // Agar current student ko aur books de sakte hain
            pageSum += arr[i];
        }
        else {
            // Naya student allocate karna padega
            studentCount++;
            if(studentCount > m) {
                return false; // Students khatam ho gaye par books bachi hain
            }
            pageSum = arr[i];
        }
    }
    return true;
}

// Function to find the minimum of the maximum pages
int allocateBooks(int arr[], int n, int m) {
    if (m > n) return -1; // Agar students books se zyada hain

    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(isPossible(arr, n, m, mid)) {
            // Agar possible hai, toh ho sakta hai isse bhi chota answer mil jaye
            ans = mid;
            e = mid - 1;
        }
        else {
            // Agar possible nahi hai, toh humein apni capacity (mid) badhani hogi
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int m = 2;

    cout << "Minimum maximum pages assigned: " << allocateBooks(arr, n, m) << endl;

    return 0;
}
