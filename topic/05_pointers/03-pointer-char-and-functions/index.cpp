#include <iostream>
#include <vector>
using namespace std;

// 1. Pass by Value (Changes reflect nahi hote)
void incrementByValue(int n) {
    n++; // Local copy increment hogi [00:22:28]
}

// 2. Pass by Pointer (Changes reflect hote hain)
void incrementByPointer(int *ptr) {
    (*ptr)++; // Actual address par value increment hogi [00:25:28]
}

// 3. Pass by Pointer with Array (Elements ko double karna)
void doubleArray(int *p, int size) {
    for(int i = 0; i < size; i++) {
        p[i] = p[i] * 2; // Address ki help se original array update [00:31:57]
    }
}

// 4. Pass by Reference (Aasan aur clean tarika)
void swapByReference(int &p1, int &p2) {
    int temp = p1;
    p1 = p2;
    p2 = temp; // Original variables hi swap honge bina pointer ke [00:54:23]
}

// 5. Vector Pass by Reference
void updateVector(vector<int> &v1) {
    for(int i = 0; i < v1.size(); i++) {
        v1[i] = 20; // Original vector update hoga [01:02:24]
    }
}

int main() {
    // --- CHARACTER ARRAY & POINTERS ---
    char arr[] = "1234";
    char *ptrChar = arr;
    
    // Character array mein address ki jagah puri string print hoti hai [00:07:38]
    cout << "Character Array: " << arr << endl; 
    cout << "Pointer to Char: " << ptrChar << endl;

    // Address print karne ke liye typecast (void*) karna padta hai [00:09:39]
    cout << "Actual Address (typecast): " << (void*)arr << endl;
    cout << endl;

    // --- FUNCTIONS EXAMPLES ---
    int num = 10;
    incrementByValue(num);
    cout << "After Pass by Value: " << num << endl; // Output: 10

    incrementByPointer(&num);
    cout << "After Pass by Pointer: " << num << endl; // Output: 11
    cout << endl;

    // Swapping using Reference
    int a = 10, b = 20;
    swapByReference(a, b);
    cout << "Swap result: a=" << a << ", b=" << b << endl;
    cout << endl;

    // Array with Function
    int myArray[5] = {1, 2, 3, 4, 5};
    doubleArray(myArray, 5);
    cout << "Double Array: " << myArray[0] << ", " << myArray[1] << endl;

    return 0;
}