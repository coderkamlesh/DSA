#include<iostream>
using namespace std;

/*
Bubble Sort Explanation (Hinglish):

Bubble Sort ek bahut hi simple sorting algorithm hai. Iska naam "Bubble" isliye hai kyunki 
bhari (bade) elements bubbles ki tarah dheere-dheere array ke end mein 'float' ya 'set' hote jate hain.

Core Logic:
1. Hum adjacent elements (bagal-bagal wale) ko compare karte hain.
2. Agar left wala element right wale se bada hai (arr[j] > arr[j+1]), to hum unhe SWAP kar dete hain.
3. Har complete pass (iteration) ke baad, unsorted part ka sabse BADA element apni sahi jagah (end mein) pahunch jata hai.

Kaise kaam karta hai (Steps):
Pass 1: Poori array scan hogi, sabse bada element last position par jayega.
Pass 2: Phir se scan hogi, lekin is baar last element ko chhod kar (kyunki wo sorted hai). Second largest element last-second par jayega.
Ye tab tak chalega jab tak array sort na ho jaye.

Example: [5, 4, 3, 2, 1]
- 5 aur 4 compare honge -> Swap -> [4, 5, 3, 2, 1]
- 5 aur 3 compare honge -> Swap -> [4, 3, 5, 2, 1]
- ... pehle pass ke baad 5 last mein hoga.

Complexity:
- Time Complexity: O(n^2)
- Space Complexity: O(1)
- Stability: Stable Algorithm (equal elements ka order change nahi karta)
*/

void bubbleSort(int arr[], int n) {
    // Outer loop: Ye total 'n-1' rounds tak chalega
    // Har round ke khatam hone par, ek largest element apni sahi jagah (aakhir mein) pahunch jayega
    for (int i = 0; i < n - 1; i++) {
        
        // Inner loop: Ye adjacent elements ko compare karta hai
        // n-i-1 ka logic: Kyunki har round 'i' ke baad, aakhir ke 'i' elements sort ho chuke hain,
        // isliye humein unhe dubara check karne ki zaroorat nahi hai.
        for (int j = 0; j < n - i - 1; j++) {
            
            // Agar left element bada hai right wale se, to replace (swap) karo
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted Array: 5 1 4 2 8" << endl;
    
    bubbleSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
