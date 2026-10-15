#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    // Address print karna use karke '&' (address-of) operator
    cout << "Address of a: " << &a << endl;

    // Pointer create karna jo integer ka address store kare
    int *ptr = &a;

    // Pointer ke andar jo address hai use print karna
    cout << "Value in ptr (Address of a): " << ptr << endl;
    // ptr ke address par jo value hai use print karna
    cout << "Value at address ptr: " << *ptr << endl; // Output: 10

    float m = 2.6;
    float *ptr1 = &m;

    cout << "Address of m: " << ptr1 << endl;

    double d = 5.5;
    double *p2 = &d;

    cout << "Size of int pointer: " << sizeof(ptr) << endl;   
    cout << "Size of double pointer: " << sizeof(p2) << endl; 

    int  b = 20;
    // int *ptr = &a;
    // cout << "Points to a: " << *ptr << endl;

    ptr = &b; // Ab ptr b ka address store karega
    cout << "Points to b: " << *ptr << endl;
    return 0;
}