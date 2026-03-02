#include <iostream>
using namespace std;

// void bubbleSort(int arr[],int n){
//     for(int i = 0; i < n-1; i++){
//         for(int j = 0; j < n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

void bubbleSort(int arr[],int n){
    for(int i = n-2; i>=0; i--){
        bool swapped = false;
        for(int j = 0; j <= i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main() {
    int arr[] = {4, 1, 3, 9, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}