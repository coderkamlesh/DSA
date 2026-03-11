/*
    CAPACITY TO SHIP PACKAGES WITHIN D DAYS
    Problem Statement:
    Humare paas 'weights' array hai aur 'days' (D) given hain.
    1. Humien ship ki capacity (max weight it can carry) decide karni hai.
    2. Packages line wise (contiguous) ship pe chadane hain.
    3. Humesha yeh koshish karni hai ki D days mein saare packages load ho jayen.
    4. Ship ki capacity MINIMUM se MINIMUM kitni ho sakti hai?

    Logic:
    - Search Space:
        - Humari ship ki capacity kam se kam itni toh honi chahiye ki wo sabse bhari package (max weight) carry kar sake.
        - Zyaada se zyaada capacity sabka sum ho sakti hai (jab ek hi din mein sab bhej dia jaye).
    - Binary Search ispe lagega.
*/

#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

bool isPossible(int weights[], int n, int days, int capacity) {
    int currentDayCount = 1;
    int weightSum = 0;

    for(int i = 0; i < n; i++) {
        if(weightSum + weights[i] <= capacity) {
            weightSum += weights[i];
        }
        else {
            currentDayCount++;
            if(currentDayCount > days || weights[i] > capacity) {
                return false;
            }
            weightSum = weights[i];
        }
    }
    return true;
}

int shipWithinDays(int weights[], int n, int days) {
    int maxWeight = 0;
    int sumWeight = 0;
    for(int i = 0; i < n; i++) {
        maxWeight = max(maxWeight, weights[i]);
        sumWeight += weights[i];
    }

    int s = maxWeight; // Starting search from maxWeight
    int e = sumWeight;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(isPossible(weights, n, days, mid)) {
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
    int weights[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int days = 5;

    cout << "Minimum ship capacity needed: " << shipWithinDays(weights, n, days) << endl;

    return 0;
}
