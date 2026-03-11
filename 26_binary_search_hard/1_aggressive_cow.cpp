/*
    AGGRESSIVE COWS PROBLEM
    Problem Statement:
    Humare paas 'n' stalls hain jo 'stalls[]' positions pe hain.
    Humein 'k' aggressive cows ko in stalls mein aise place karna hai ki:
    - Kisi bhi do cows ke beech ki MINIMUM distance MAXIMUM ho sake.
    
    Yani, humein cows ko jitna ho sake door-door bitana hai, aur us doori ka minimum batana hai.

    Logic:
    1. Sabse pehle stalls ko SORT karna padega (taaki positions sequence mein ho).
    2. Search Space:
       - Minimum distance 's' = 0
       - Maximum distance 'e' = last stall position - pehla stall position
    3. Hum check karenge (`isPossible`) ki kya hum 'mid' distance maintain karke 'k' cows ko stalls mein rakh sakte hain.
    4. Agar possible hai, toh hum aur zyada distance try karenge (s = mid + 1) kyunki humein maximum minimum distance chahiye.
    5. Agar possible nahi hai, toh humein distance kam karni padegi (e = mid - 1).
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if we can place 'k' cows with at least 'mid' distance between them
bool isPossible(int stalls[], int n, int k, int mid) {
    int cowCount = 1; // Pehli cow pehle stall pe rakh di
    int lastPos = stalls[0];

    for(int i = 1; i < n; i++) {
        if(stalls[i] - lastPos >= mid) {
            // Agar current stall aur pichli cow ke beech ka distance 'mid' se zyada ya barabar hai
            cowCount++;
            if(cowCount == k) {
                return true; // Saari cows place ho gayi
            }
            lastPos = stalls[i]; // Update position for next cow
        }
    }
    return false;
}

int aggressiveCows(int stalls[], int n, int k) {
    sort(stalls, stalls + n); // Sort stalls positions

    int s = 0;
    int maxi = -1;
    for(int i=0; i<n; i++) {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi; // Maximum distance last stall tak ho sakti hai
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(isPossible(stalls, n, k, mid)) {
            // Agar possible hai, toh store karo aur larger distance try karo
            ans = mid;
            s = mid + 1;
        }
        else {
            // Agar possible nahi hai, toh distance kam karo
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    int stalls[] = {1, 2, 8, 4, 9};
    int n = 5;
    int k = 3; // Number of cows

    cout << "Maximum minimum distance is: " << aggressiveCows(stalls, n, k) << endl;

    return 0;
}
