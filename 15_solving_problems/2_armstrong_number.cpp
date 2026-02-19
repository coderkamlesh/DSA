#include <iostream>
using namespace std;

int countDigits(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}

bool isArmstrong(int n){
   int originalnumber=n;
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum+=digit*digit*digit;
        n=n/10;
    }
   return sum==originalnumber;
}

bool isArmstrong(int n, int digits){
   int originalnumber=n;
    int sum=0;
    while(digits--){
        int digit=n%10;
        sum+=digit*digit*digit;
        n=n/10;
    }
   return sum==originalnumber;
}

int main() {
   
    int input;
    cin>>input;
    int diguts=countDigits(input);
    // cout<<countDigits(input)<<endl;
    // cout<<isArmstrong(input)<<endl;
    cout<<isArmstrong(input,diguts)<<endl;

    return 0;
}