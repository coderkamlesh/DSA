/*
================================================================================
                         ARRAY - DETAILED NOTES
================================================================================

1. DECLARATION & MEMORY RESERVATION:
   - Jab hum likhte hain: `int arr[5];`
   - System memory mein ek saath (Contiguous) space reserve kar leta hai.
   - Buffer space: Agar `int` 4 bytes ka hai, toh 20 bytes (5 * 4) ka block fix ho jayega.
   - Address Holding: 'arr' variable iss pure block ke shuruati address (Base Address) ko hold karta hai.

2. INDEX BASED LOGIC (Why 0-indexed?):
   - Index actually 'OFFSET' (duri) batata hai Base Address se.
   - 0-indexed kyun? Kyunki pehla element bilkul shuruat (Base Address) par hi hota hai.
   - Formula: Address of arr[i] = Base Address + (i * size of data type).
   
   - Agar hum i=0 rakhte hain: 
     Address = Base + (0 * 4) = Base Address (Ekdum sahi!)
   
   - Agar hum 1-indexed (i=1 se start) karte:
     Address = Base + (1 * 4) = Base + 4 (Pehla element skip ho jata!)
     Humein har baar (i-1) karna padta, jo computer ke liye extra mehnat hoti. 
     Isliye 0-indexing fastest hai.

3. OPERATIONS (Store, Update, Delete):

   - STORE (Initialization/Insertion):
     `arr[0] = 10;` -> Index 0 waale address par value 10 daal do.

   - UPDATE (Modify):
     `arr[2] = 100;` -> Agar wahan pehle se koi value thi, toh woh 100 se replace ho jayegi.

   - RETRIEVE (Access):
     `int x = arr[1];` -> Index 1 ki value nikaal kar x mein daal do.

   - DELETE (Logical):
     - Static Arrays mein memory remove nahi ho sakti.
     - Hum sirf uss position par 0 ya koi 'special value' daal dete hain, ya phir 
       un elements ko shift kar dete hain.

================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    // 1. Declaration (Memory reserve ho gayi)
    int arr[5]; 

    // 2. Storing values (Direct Assignment)
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30; // Index 2 par store kiya
    arr[3] = 40;
    arr[4] = 50;

    cout << "Initial values at indices: " << endl;
    for(int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << " at address: " << &arr[i] << endl;
    }

    // 3. Updating value
    cout << "\n--- Updating arr[2] from 30 to 99 ---" << endl;
    arr[2] = 99; // Value update ho gayi usi address pe
    cout << "Updated arr[2] = " << arr[2] << endl;

    // 4. "Deleting" logic
    // Static array mein memory delete nahi hoti, hum bas value 'clear' ya shift karte hain.
    cout << "\n--- Logically deleting arr[4] by setting it to 0 ---" << endl;
    arr[4] = 0; 
    cout << "arr[4] after 'deletion' = " << arr[4] << endl;

    // 5. Implicit Size Calculation
    // Jab hum [] khali chhodte hain, C++ {} ke elements count karke size fix kar deta hai.
    int name[] = {1, 2, 3, 4, 5}; 
    // Yahan size automatic 5 ho gaya. Index allowed: 0 to 4.

    cout << "\n--- Implicit Array Size ---" << endl;
    cout << "First element (using *name): " << *name << endl; // name pointer ki tarah behave karta hai

    // KHATRA (Danger Zone) - Padosi ki Memory:
    // name[5] = 6; 
    /* 
       Ye line 'Out of Bounds' hai. Array ka size 5 hai (0-4 index).
       Index 5 access karne par C++ padosi ki memory location par value likh deta hai.
       Isse data corruption ya crash ho sakta hai.
    */

    // 6. Zero Initialization Trick
    // Agar hum size 5 dein aur sirf {0} likhein, toh saare elements 0 ho jayenge.
    int zeroArr[5] = {0}; 
    cout << "\n--- Array initialized with {0} ---" << endl;
    for(int i = 0; i < 5; i++) {
        cout << zeroArr[i] << " ";
    }
    cout << endl;

    // Twist: Agar sirf ek value di: {10}, toh baaki sab 0 honge (sirf pehla 10 hoga).
    int partialArr[5] = {10};
    cout << "\n--- Partial Initialization {10} ---" << endl;
    for(int i = 0; i < 5; i++) {
        cout << partialArr[i] << " "; // Output: 10 0 0 0 0
    }
    cout << endl;
    char a ='a';
    char *ptr=&a;
    cout<<sizeof(ptr);

    // 7. COMPUTER ARCHITECTURE & MEMORY (Notes)
    /*
       CONCEPT: Why 32-bit OS is limited to 4GB RAM?
       
       A. Byte-Addressable Memory:
          - RAM ka har ek block 1 Byte (8 bits) ka hota hai.
          - Har block ko pehchanne ke liye ek 'Unique Address' chahiye.

       B. 32-bit Address Space:
          - 32-bit system matlab CPU ke paas address likhne ke liye 32 bit ki pearchi hai.
          - Total unique patterns (addresses) = 2^32 = 4,294,967,296.

       C. 4GB Limit:
          - 4.2 Billion unique addresses * 1 Byte per block = 4.2 Billion Bytes.
          - 4.2 Billion Bytes = Exactly 4 GB.
          - Isliye, 32-bit OS 4GB se upar wale bytes ko 'naam' (address) nahi de sakta.

       D. Pointer Size (The Label Size):
          - Agar aap check karoge: sizeof(char*), sizeof(int*), etc.
          - 32-bit system par ye hamesha 4 Bytes (32 bits) aayega.
          - Kyun? Kyunki 4.2 Billion wala bada address likhne ke liye 32-bit ki space chahiye.
    */

    char a = 'a';
    char *ptr = &a;
    cout << "\n--- Architecture Check ---" << endl;
    cout << "Size of Pointer (ptr): " << sizeof(ptr) << " bytes" << endl;
    
    if(sizeof(ptr) == 4) {
        cout << "System: 32-bit (Max 4GB RAM Addressable)" << endl;
    } else {
        cout << "System: 64-bit (Can address massive RAM)" << endl;
    }

    return 0;
}
