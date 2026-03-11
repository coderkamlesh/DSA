/*
    TWO SUM PROBLEM (Two-Pointer Technique)
    
    Problem Statement:
    Humein ek 'sorted' array aur ek 'target' value di gayi hai.
    Humein batana hai ki kya array mein aisi koi do values hain jinka sum 'target' ke barabar ho.
    Agar milti hain, toh unke positions (1-based index yahan) return karne hain.

    NOTE: Two-Pointer technique tabhi kaam karti hai jab array SORTED ho.
    Agar array sorted nahi hai, toh pehle sort karna padega [O(NlogN)]
    ya fir Hash Map use karna padega [O(N)].

    Two-Pointer Logic:
    1. Start pointer 's' ko array ke shuru (index 0) pe rakho.
    2. End pointer 'e' ko array ke last (index n-1) pe rakho.
    3. Loop chalao jab tak s < e:
       - Agar sum == target: Answer mil gaya!
       - Agar sum > target: Humein sum chota karna hai, isliye 'e' ko peeche lao (e--).
       - Agar sum < target: Humein sum bada karna hai, isliye 's' ko aage badhao (s++).
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the two numbers that sum up to target
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int currentSum = nums[start] + nums[end];

        if (currentSum == target) {
            // Found the pair! Returning 1-based indices as per user code
            return {start + 1, end + 1};
        } 
        else if (currentSum > target) {
            // Sum bada hai, toh bada wala element (end वाला) chota karna padega
            end--;
        } 
        else {
            // Sum chota hai, toh chota wala element (start वाला) bada karna padega
            start++;
        }
    }

    // Agar koi pair nahi milta
    return {-1, -1};
}

int main() {
    // Array sorted hona chahiye Two-Pointer ke liye
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (result[0] != -1) {
        cout << "Pair found at indices (1-based): " << result[0] << ", " << result[1] << endl;
        cout << "Numbers are: " << nums[result[0]-1] << " and " << nums[result[1]-1] << endl;
    } else {
        cout << "No pair found with the given target." << endl;
    }

    return 0;
}
