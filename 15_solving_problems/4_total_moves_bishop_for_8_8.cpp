/*
Question: 
Given the position of a Bishop (A, B) on an 8x8 chessboard. 
Your task is to find the total number of squares the Bishop can visit in a single move.
A Bishop can only move diagonally and cannot go outside the board.

Constraints:
1 <= A, B <= 8 
(A is the Row, B is the Column)
*/

#include <iostream>
#include <algorithm> // min function ke liye
using namespace std;

int main() {
    int A, B;
    
    // User se position input lena
    cout << "Enter Bishop's position (Row A and Column B: 1 to 8): ";
    cin >> A >> B;

    // Har direction mein kitne moves possible hain, uska logic:
    
    // 1. Top-Left: Row kam hogi, Column bhi kam hoga
    int topLeft = min(A - 1, B - 1);
    
    // 2. Top-Right: Row kam hogi, Column badhega
    int topRight = min(A - 1, 8 - B);
    
    // 3. Bottom-Left: Row badhegi, Column kam hoga
    int bottomLeft = min(8 - A, B - 1);
    
    // 4. Bottom-Right: Row badhegi, Column badhega
    int bottomRight = min(8 - A, 8 - B);

    // Total moves = sabka sum
    int total_moves = topLeft + topRight + bottomLeft + bottomRight;

    cout << "Total possible moves: " << total_moves << endl;

    return 0;
}