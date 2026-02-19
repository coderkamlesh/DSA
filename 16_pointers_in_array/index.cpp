#include <iostream>
using namespace std;

int main() {
    // 1. Array Initialization
    int arr[5] = {1, 2, 3, 4, 5};

    // 2. Printing Addresses of Array Elements
    cout << "--- Address Printing Methods ---" << endl;
    cout << "Address of first element (arr): " << arr << endl;
    cout << "Address using (arr + 0): " << (arr + 0) << endl;
    cout << "Address using (&arr[0]): " << &arr[0] << endl;
    
    // Printing address of second element (index 1)
    cout << "Address of second element (arr + 1): " << (arr + 1) << endl; // Moves by 4 bytes (int size)
    cout << endl;

    // 3. Accessing Values using Pointers (De-referencing)
    cout << "--- Value Accessing Methods ---" << endl;
    cout << "Value at index 0 (*arr): " << *arr << endl;
    cout << "Value at index 1 (*(arr + 1)): " << *(arr + 1) << endl;
    cout << "Value using array syntax (arr[2]): " << arr[2] << endl;
    // Interesting fact from video: i[arr] is same as arr[i]
    cout << "Value using reverse syntax (2[arr]): " << 2[arr] << endl; 
    cout << endl;

    // 4. Pointer Arithmetic with a Pointer Variable
    cout << "--- Pointer Arithmetic ---" << endl;
    int *ptr = arr; // ptr points to the first element
    
    // Printing all values using pointer increment
    cout << "Printing all values using ptr++:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << *ptr << " ";
        ptr++; // Moves to the next memory location [00:29:50]
    }
    cout << endl;

    // 5. Addition and Subtraction in Pointers
    ptr = arr; // Resetting ptr to start
    ptr = ptr + 3; // Directly jump to index 3 (value 4)
    cout << "Value after ptr + 3: " << *ptr << endl;
    
    ptr = ptr - 2; // Move back 2 positions (value 2)
    cout << "Value after ptr - 2: " << *ptr << endl;
    cout << endl;

    // 6. Important Note: Array name (arr) is a constant pointer
    // arr++; // Ye ERROR dega kyunki array ka base address change nahi kar sakte [00:42:02]
    
    return 0;
}