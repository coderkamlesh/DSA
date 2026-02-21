/*
Question: Nim Game
There is a heap of 'n' stones. You and your friend take turns making a move.
In each move, the person whose turn it is will remove 1 to 3 stones.
The one who removes the last stone is the winner.
You go first. Return true if you can win the game given n, otherwise return false.

Logic:
If n is a multiple of 4, you will always lose because no matter how many
stones you pick (1, 2, or 3), your friend can pick (4 - your_pick) stones
to keep you at a multiple of 4 until the end.
*/

#include <iostream>
using namespace std;

bool canWinNim(int n) {
    // Agar n, 4 se poora divide ho raha hai toh hum haarenge
    if (n % 4 == 0) {
        return false;
    } else {
        // Baaki har case mein hum jeet sakte hain
        return true;
    }
}

int main() {
    int n;
    cout << "Enter number of stones: ";
    cin >> n;

    if (canWinNim(n)) {
        cout << "Result: You can WIN this game!" << endl;
    } else {
        cout << "Result: You will LOSE this game (if opponent plays optimally)." << endl;
    }

    return 0;
}
