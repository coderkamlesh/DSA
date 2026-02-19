#include <iostream>
using namespace std;

bool isArmstrong(int n){
   int originalnumber=n;
   int sum=0;
   while(n>0){
    int digit=n%10;
    sum+=digit*digit*digit;
    n=n/10;
   }
   if(sum==originalnumber){
    return true;
   }
   else{
    return false;
   }
   
}

int main() {
   
    return 0;
}