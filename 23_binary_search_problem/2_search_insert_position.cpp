#include<iostream>
using namespace std;

int searchInsert(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    int index = n; 

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= target) {
            index = mid;
            end = mid - 1; 
        } else {
            start = mid + 1; 
        }
    }
    return index;
}

int main(){

    int arr[]={-12, -11, -3, 5, 6, 15, 16, 18};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    int index=searchInsert(arr,size,target);
    cout << "Array: ";
    for(int i=0; i<size; i++) cout << arr[i] << " ";
    cout << "\nTarget: " << target;
    cout << "\nIndex: " << index << endl;
}