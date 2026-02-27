#include<iostream>
using namespace std;

/*
Insertion Sort Explanation (Hinglish):

Insertion Sort ko aise samjho jaise tum Taash (Playing Cards) khel rahe ho. 
Jab tumhare paas ek naya card aata hai, to tum use sahi jagah par "INSERT" karte ho.

Core Logic:
1. Array ko do parts mein socho: Sorted (baayin taraf) aur Unsorted (daayin taraf).
2. Ek element uthao (current element) aur use uske peeche waleSorted part se compare karo.
3. Jab tak peeche wala element bada hai, use ek position aage shift karte jao.
4. Jaisa hi sahi jagah mil jaye, vahan current element ko "Insert" kar do.

Kaise Kaam Karta Hai (Steps):
1. Pehla element (index 0) hamesha sorted maana jata hai.
2. Index 1 se loop start karo (yeh tumhara current element hai).
3. Is element ko apne peeche wale elements se compare karo.
4. Agar peeche wala bada hai, to use right shift karo taaki jagah bane.
5. Sahi jagah milte hi element ko vahan rakh do.

Example: [5, 2, 4, 6, 1]
- Step 1: 2 uthaya, 5 se compare kiya. 5 bada hai to shifted -> [_, 5, 4, 6, 1]. Phir 2 insert kiya -> [2, 5, 4, 6, 1].
- Step 2: 4 uthaya, 5 se compare kiya. 5 bada hai to shifted -> [2, _, 5, 6, 1]. 2 chhota hai, to 2 ke aage 4 insert kiya -> [2, 4, 5, 6, 1].
- Step 3: 6 uthaya, 5 se compare kiya. 5 chhota hai, to 6 vahi rahega -> [2, 4, 5, 6, 1].
- Step 4: 1 uthaya, sabse compare karke sabse aage insert kiya -> [1, 2, 4, 5, 6].

Complexity:
- Best Case (Already Sorted): O(n) - Sirf comparisons honge, swaps nahi.
- Worst/Average Case: O(n^2)
- Space Complexity: O(1)
*/

void insertionSort(int arr[], int n) {
    // Yahan insertion sort ka logic likho
    // Loop start karo i = 1 se...
    for(int i=1;i<n;i++){
        // int key=arr[i];
        // int j=i-1;
        // while(j>=0 && arr[j]>key){
        //     arr[j+1]=arr[j];
        //     j--;
        // }    
        // arr[j+1]=key;
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
                break;
            }
        }
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
