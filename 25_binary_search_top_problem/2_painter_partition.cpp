/*
    PAINTER'S PARTITION PROBLEM
    Problem Statement:
    Humare paas 'n' boards hain jin ki length 'arr[i]' hai.
    Humien 'k' painters ko yeh kaam distribute karna hai.
    1. Har painter ko sirf contiguous boards dene hain.
    2. Har unit length board ko color karne mein 1 unit time lagta hai.
    3. Humein boards ko aise divide karna hai ki MAXIMUM time jo kisi bhi painter ko lage, wo MINIMUM ho sake.

    Logic:
    - Yeh problem bilkul 'Book Allocation Problem' jaisa hi hai.
    - Books = Boards
    - Students = Painters
    - Pages = Board Lengths
*/

#include<iostream>
#include<vector>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid) {
    int painterCount = 1;
    int boardSum = 0;

    for(int i = 0; i < n; i++) {
        if(boardSum + arr[i] <= mid) {
            boardSum += arr[i];
        }
        else {
            painterCount++;
            if(painterCount > k || arr[i] > mid) {
                return false;
            }
            boardSum = arr[i];
        }
    }
    return true;
}

int partitionBoards(int arr[], int n, int k) {
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(isPossible(arr, n, k, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    int arr[] = {5, 5, 5, 5};
    int n = 4;
    int k = 2; // Number of painters

    cout << "Minimum time to paint all boards: " << partitionBoards(arr, n, k) << " units" << endl;

    return 0;
}
