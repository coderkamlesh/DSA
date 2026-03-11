#include <iostream>
#include <vector>
#include <algorithm> // Sort aur Search algorithms ke liye

using namespace std;

/*
================================================================================
                    CODER ARMY: LECTURE 27 - STL & VECTOR
================================================================================

1. STL (Standard Template Library) KYA HAI AUR KYU CHAHIYE?
   - Agar 100 numbers sort karne hain, toh Bubble/Selection sort ka pura logic
     likhna, edge cases check karna padta hai.
   - STL hume pre-written functions aur data structures deta hai. Ek line ka 
     code likho aur kaam khatam. (e.g., sort() function).
   - Hum array ko direct STL me use nahi karte, uski jagah "Vector" use karte hain.

2. ARRAY VS VECTOR (FIRST PRINCIPLES: STACK VS HEAP)
   - Normal Array (int arr[n]): Jab hum user se 'n' input leke arr[n] banate 
     hain, toh ye memory STACK me allocate hoti hai. Stack memory choti hoti hai 
     (8-20 MB). Agar user ne n = 1 crore de diya, toh "Stack Overflow" ho jayega. 
     Isiliye dynamic size array stack pe banana bad practice hai (Static Allocation).
   - Vector: Ye HEAP memory me banta hai. Heap memory GBs me hoti hai. Isiliye 
     run-time pe iska size badhana safe aur possible hai (Dynamic Allocation).

3. VECTOR CAPACITY DOUBLING LOGIC (MEMORY ALLOCATION)
   - Jab vector full ho jata hai aur hum naya element daalte hain, toh vector 
     heap me (current size * 2) size ka naya memory block dhundhta hai.
   - Purana data naye block me copy karta hai, naya element daalta hai, aur 
     purane block ko memory se release kar deta hai.
   - Ye approach O(n) lagti hai dekhne me, par mathematically iska 'Average 
     Case Time Complexity' O(1) hi aata hai push_back ke liye.
================================================================================
*/

int main() {
    
    // ==========================================
    // 1. VECTOR DECLARATION & INITIALIZATION
    // ==========================================
    vector<int> v1;                       // Normal khali vector
    vector<int> v2(4);                    // 4 size ka vector (sabme 0 hoga)
    vector<int> v3(5, 1);                 // 5 size ka vector, saari values 1 hongi
    vector<int> v4 = {10, 20, 30, 40};    // Direct values daalna (Kuch compilers me error deta hai, online chal jata hai)
    
    // User se input leke daalna ho toh:
    // int n, a; cin >> n;
    // for(int i=0; i<n; i++) { cin >> a; v1.push_back(a); }

    // ==========================================
    // 2. INSERTING VALUES (O(1) average time)
    // ==========================================
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    // Ab v me hai: {2, 4, 6, 8}

    // ==========================================
    // 3. SIZE VS CAPACITY
    // ==========================================
    // Size = Kitne elements actual me bhare hain
    // Capacity = Memory me kitni jagah (boxes) ban chuke hain (Double logic)
    cout << "Size: " << v.size() << endl;       // 4
    cout << "Capacity: " << v.capacity() << endl; // 4 (Agar ek aur daloge toh 8 ho jayegi)

    // ==========================================
    // 4. DELETING / REMOVING VALUES
    // ==========================================
    v.pop_back(); // Last element uda dega. Array: {2, 4, 6}. Time: O(1)
    
    // Specific element ko erase karna (Time: O(N) kyuki elements aage shift hote hain)
    v.erase(v.begin() + 1); // Index 1 (matlab 4) ko uda dega. Array: {2, 6}

    // Vector ke beech me kuch ghusana (Insert - Time: O(N))
    v.insert(v.begin() + 1, 50); // Index 1 pe 50 daal do. Array: {2, 50, 6}

    // Saare elements delete karna
    // v.clear(); // Size 0 ho jayega, par Capacity wahi rahegi memory me.

    // ==========================================
    // 5. ACCESSING ELEMENTS & PROPERTIES
    // ==========================================
    cout << "First Element: " << v.front() << endl; // v[0]
    cout << "Last Element: " << v.back() << endl;   // v[v.size() - 1]
    cout << "Is vector empty? " << v.empty() << endl; // Khali hoga toh 1 (true) aayega, warna 0 (false)

    // ==========================================
    // 6. COPYING ONE VECTOR TO ANOTHER
    // ==========================================
    vector<int> a;
    a = v; // v ki saari values 'a' me copy ho jayengi as it is.

    // ==========================================
    // 7. ITERATORS & PRINTING (AUTO KEYWORD)
    // ==========================================
    // - v.begin() : Pehle element ko point karta hai
    // - v.end()   : Last element ke BAAAD wale khali space ko point karta hai
    // - v.rbegin(): Reverse begin (Peeche se pehla element)
    // - v.rend()  : Reverse end (Aage se pehle wale ka space)
    
    cout << "Vector v elements: ";
    // Auto keyword apna data type khud samajh leta hai (jaise yahan iterator samajh lega)
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " "; // Pointer ko dereference karne ke liye * lagaya
    }
    cout << endl;

    // Normal loop se bhi print kar sakte hain:
    // for(int i = 0; i < v.size(); i++) cout << v[i] << " ";

    // ==========================================
    // 8. STL ALGORITHMS (SORT & SEARCH)
    // ==========================================
    vector<int> ans = {54, 15, 125, 5, 235};

    // A. SORTING (Increasing Order)
    sort(ans.begin(), ans.end()); 
    // ans ab hai: {5, 15, 54, 125, 235}

    // B. SORTING (Decreasing Order)
    // Tarika 1: greater<int>() use karke
    sort(ans.begin(), ans.end(), greater<int>()); 
    
    // Tarika 2: Reverse iterators use karke (rbegin, rend)
    // sort(ans.rbegin(), ans.rend());

    // C. BINARY SEARCH (Vector pehle SORTED hona chahiye iske liye)
    sort(ans.begin(), ans.end()); // Pehle wapas increasing me sort kiya
    bool present = binary_search(ans.begin(), ans.end(), 54);
    cout << "Is 54 present? " << present << endl; // 1 (true) print karega

    // D. FINDING INDEX OF AN ELEMENT
    // find() function ek iterator return karta hai us number pe
    auto it2 = find(ans.begin(), ans.end(), 54);
    
    // Iterator me se base address (begin) minus karoge toh Index mil jayega
    int index = it2 - ans.begin();
    cout << "Index of 54 is: " << index << endl;

    return 0;
}