#include<iostream>
using namespace std;

/*
Selection Sort Explanation (Hinglish):

Selection Sort ek simple sorting algorithm hai jo array ko do parts mein split karta hai:
1. Sorted Part (shuruat mein khali hota hai)
2. Unsorted Part (poori array shuruat mein unsorted hoti hai)

Algorithm Kaise Kaam Karta Hai:
1. Sabse pehle poori array mein se 'Minimum' (sabse chhota) element dhoondho.
2. Us minimum element ko array ke pehle element ke saath swap (badal) do.
3. Ab pehla element 'Sorted' ho gaya.
4. Agli baar bachi hui array (unsorted part) mein se phir se minimum dhoondho aur use second position ke saath swap karo.
5. Ye process tab tak repeat karo jab tak poori array sort na ho jaye.

Example: [64, 25, 12, 22, 11]
- Step 1: Minimum 11 hai, swap with 64 -> [11, 25, 12, 22, 64]
- Step 2: Bachi array [25, 12, 22, 64] mein min 12 hai, swap with 25 -> [11, 12, 25, 22, 64]
- Step 3: Bachi array [25, 22, 64] mein min 22 hai, swap with 25 -> [11, 12, 22, 25, 64]
- And so on...

Complexity:
- Time Complexity: O(n^2) (Sabhi cases mein: Best, Average, Worst)
- Space Complexity: O(1) (Extra space nahi lagti, sirf swapping ke liye variables use hote hain)
*/

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

int main() {
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}