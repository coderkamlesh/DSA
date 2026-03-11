/*
    KOKO EATING BANANAS
    Problem Statement:
    Koko ke paas 'n' piles hain jin mein 'piles[i]' bananas hain.
    Guard 'h' ghante mein wapas aayega.
    Koko ko ek aisi minimum speed 'k' (bananas per hour) dhoondni hai taaki wo saare bananas 'h' ghante se pehle ya tab tak kha sake.
    
    Rules:
    - Ek ghante mein Koko ek hi pile choose karti hai.
    - Agar pile mein 'k' se kam bananas hain, toh wo unn sabko kha leti hai par usse pura ghanta lagta hai (yani next hour wo naya pile start karegi).

    Logic:
    Search Space:
    - Minimum speed 's' = 1 (Kyunki kam se kam 1 banana toh khayegi).
    - Maximum speed 'e' = Maximum number of bananas in any single pile (Kyunki ek ghante mein 1 pile se zyada nahi kha sakti, toh max pile tak ki speed kafi hai).
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Function to check if Koko can eat all bananas with speed 'mid' within 'h' hours
bool isPossible(int piles[], int n, int h, int mid) {
    long long totalHours = 0;
    for(int i = 0; i < n; i++) {
        // ghante = ceil(piles[i] / mid)
        totalHours += (piles[i] + mid - 1) / mid; 
    }
    return totalHours <= h;
}

int minEatingSpeed(int piles[], int n, int h) {
    int s = 1;
    int maxi = -1;
    for(int i = 0; i < n; i++) {
        maxi = max(maxi, piles[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(isPossible(piles, n, h, mid)) {
            // Agar possible hai, toh speed kam karke check karo (kyunki humein MINIMUM speed chahiye)
            ans = mid;
            e = mid - 1;
        }
        else {
            // Agar possible nahi hai, toh speed badhao
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    int piles[] = {3, 6, 7, 11};
    int n = 4;
    int h = 8;

    cout << "Minimum eating speed Koko needs: " << minEatingSpeed(piles, n, h) << " bananas/hr" << endl;

    return 0;
}
