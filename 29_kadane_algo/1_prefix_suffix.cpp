/*
Prefix aur Suffix kya hote hain:

1. Prefix: 
   - Prefix array ka woh hissa (subarray) hota hai jo hamesha array ke starting (index 0) se shuru hota hai.
   - Example: Agar hamara array [10, 20, 30, 40] hai, toh iske prefixes honge:
     - [10]
     - [10, 20]
     - [10, 20, 30]
     - [10, 20, 30, 40]

2. Suffix:
   - Suffix array ka woh hissa hota hai jo hamesha array ke end (last index) par khatam hota hai.
   - Example: Agar hamara array [10, 20, 30, 40] hai, toh iske suffixes honge:
     - [40]
     - [30, 40]
     - [20, 30, 40]
     - [10, 20, 30, 40]

Note: Prefix hamesha aage se shuru hota hai, aur Suffix hamesha peeche se shuru hota hai.
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> prefixSum(vector<int> &arr){
  vector<int> ans;
  int prefix=arr[0];
  ans.push_back(prefix);
  for(int i=1;i<arr.size();i++){
    prefix=prefix+arr[i];
    ans.push_back(prefix);
  }
  return ans;
}

vector<int> suffixSum(vector<int> &arr){
  int n = arr.size();
  vector<int> ans(n); // Vector ko array ki size jitna bada karna padega pehle

  ans[n-1] = arr[n-1]; // Last element hamesha same rahega
  
  // Peeche se loop chalayenge (n-2 se 0 tak)
  for(int i = n-2; i >= 0; i--){
    ans[i] = arr[i] + ans[i+1]; // Current element + baaki peeche ka sum
  }
  return ans;
}

int main(){
  vector<int> arr={10,20,30,40,50};
  //  vector<int> prefix_sum=prefixSum(arr);

  //  for(int i=0;i<prefix_sum.size();i++){
  //     cout<<prefix_sum[i]<<" ";
  //  }
   vector<int> suffix_sum=suffixSum(arr);

   for(int i=0;i<suffix_sum.size();i++){
      cout<<suffix_sum[i]<<" ";
   }


}