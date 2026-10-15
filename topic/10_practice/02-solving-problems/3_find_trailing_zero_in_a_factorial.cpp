/*
    Problem: Find the number of Trailing Zeros in N! (N Factorial)

    Key Insight:
    - Trailing zeros aate hain jab 2 aur 5 multiply hote hain (2 x 5 = 10)
    - Factorial mein 2s bahut jyada hote hain, isliye sirf 5s count karo
    - Formula: n/5 + n/25 + n/125 + ...
    
    Example: 25! mein trailing zeros?
    -> 25/5  = 5  (5, 10, 15, 20, 25 — ye 5 numbers 5 se divisible hain)
    -> 5/5   = 1  (25 mein ek extra 5 chhupa tha, yani 25 = 5x5)
    -> Total = 6 trailing zeros

    Approach: While loop se baar baar n ko 5 se divide karo
    aur quotient ko count mein add karte jao, jab tak n >= 5 ho.

    Time Complexity: O(log5(N))
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int trailingZero(int n){
    int count = 0;
    
    // Jab tak n 5 se bada ya barabar hai, tab tak divide karo
    // Har iteration mein n/5 se pata chalta hai kitne multiples of 5 hain
    // n = n/5 karne se hum 25, 125, 625... ke hidden 5s bhi count karte hain
    while(n >= 5){
        count = count + (n / 5);  // kitne 5 ke multiples hain 1 to n mein
        n = n / 5;                // ab n ko chhota karo (25->5->1)
    }
    return count;
}

int main() {
    int input;
    cin >> input;
    cout << "Trailing Zeros in " << input << "! = " << trailingZero(input) << endl;

    return 0;
}