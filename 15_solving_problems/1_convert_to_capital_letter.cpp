// Question: Ek lowercase character input lo aur use uppercase mein convert karke print karo.
// Example: Input 'b' → Output 'B'

#include <iostream>
using namespace std;

// Approach 1: ASCII difference use karna
// 'a'=97, 'A'=65 → difference = 32
// Toh lowercase se 32 ghatao → uppercase mil jata hai
// e.g. 'b'(98) - 32 = 66 = 'B'
char toUpperCase(char ch) {
    return ch-32;
}

// Approach 2: Character arithmetic use karna (zyada readable)
// ch - 'a' → alphabet mein position nikalo (0-indexed)
// + 'A'    → us position ka capital letter lo
// e.g. 'b' - 'a' = 1 (position), 1 + 'A' = 1 + 65 = 66 = 'B'
char convert(char ch){
    return ch-'a'+'A';
}

int main() {
    char ch;
    cin>>ch;

    cout<<toUpperCase(ch)<<endl;
    cout<<convert(ch)<<endl;
    
    return 0;
}


