#include<iostream>
#include<vector>
using namespace std;

/*
Logic:
1. Maan lo array ka size 'n-1' hai, iska matlab numbers 1 se 'n' tak hone chahiye.
2. Sabse pehle 'n' ki value nikalenge: n = arr.size() + 1.
3. 1 se 'n' tak ka expected sum nikalenge: Formula -> n*(n+1)/2
4. Array mein jo numbers hain unka actual sum nikalenge.
5. Missing Number = Expected Sum - Actual Sum

Dry Run:
arr = {1, 2, 4, 5} (n-1 = 4, so n = 5)
1. n = 4 + 1 = 5
2. Expected Sum = 5 * (5 + 1) / 2 = 15 (1+2+3+4+5=15 hona chahiye tha)
3. Actual Sum = 1 + 2 + 4 + 5 = 12
4. Missing Number = 15 - 12 = 3
*/

class Solution {
public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        
        // 1 se n tak ka sum nikalne ka formula
        int expectedSum = (n * (n + 1)) / 2;
        
        // Array ke elements ka sum
        int actualSum = 0;
        for(int i = 0; i < arr.size(); i++) {
            actualSum += arr[i];
        }
        
        return expectedSum - actualSum;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 4, 5};
    cout << "Missing Number is: " << sol.missingNum(arr) << endl;
    return 0;
}
