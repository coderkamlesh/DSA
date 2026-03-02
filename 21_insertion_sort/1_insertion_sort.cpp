#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
                break;
            }
        }
    }
}

int main(){

    int arr[] = {9, 7, 3 ,7 ,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}