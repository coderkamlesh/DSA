/*
    C++ STL - Other Essential Containers
    
    1. DEQUE (Double Ended Queue):
       - Elements can be added or removed from both ends.
       - Dynamic size, not necessarily contiguous memory.
       
    2. LIST:
       - Implementation of Doubly Linked List.
       - Direct access (indexing) is not possible.
       
    3. STACK (LIFO):
       - Last In First Out.
       
    4. QUEUE (FIFO):
       - First In First Out.
       
    5. PRIORITY QUEUE:
       - Max Heap by default (largest element at top).
       
    6. SET:
       - Stores unique elements only.
       - Implemented using BST (Binary Search Tree).
       - Elements are in sorted order.
       
    7. MAP:
       - Stores data in key-value pairs.
       - Each key is unique and maps to exactly one value.
*/

#include <iostream>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

void explainContainers() {
    // --- DEQUE ---
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    // d.pop_front(), d.at(0), d.front(), d.back() etc. work

    // --- LIST ---
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.erase(l.begin()); // Removes element

    // --- STACK ---
    stack<string> s;
    s.push("love");
    s.push("babbar");
    // s.top() -> "babbar", s.pop() removes "babbar"

    // --- QUEUE ---
    queue<string> q;
    q.push("love");
    q.push("babbar");
    // q.front() -> "love", q.pop() removes "love"

    // --- PRIORITY QUEUE ---
    priority_queue<int> maxHeap; // Default
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min Heap

    // --- SET ---
    set<int> st;
    st.insert(5);
    st.insert(5); // Only one 5 will be stored
    st.insert(1);
    // st.count(5) -> returns 1 if present

    // --- MAP ---
    map<int, string> m;
    m[1] = "babbar";
    m[13] = "kumar";
    m.insert({2, "love"});
    // for(auto i: m) cout << i.first << " " << i.second << endl;
}

int main() {
    explainContainers();
    cout << "STL Containers setup successfully!" << endl;
    return 0;
}
