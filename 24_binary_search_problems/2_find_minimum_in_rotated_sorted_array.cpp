/*
Problem: Find Minimum in Rotated Sorted Array.
Problem description: Ek sorted array diya gaya hai jo rotate ho chuka hai. 
Humein is array ka minimum element (sabse chota number) find karna hai. 
Isse binary search ka use karke O(log n) time complexity mein solve kiya gaya hai.
*/
#include<iostream>
using namespace std;

int findMin(int arr[],int n){
    int ans =arr[0],start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]>=arr[0]){
                start=mid+1;
            }else{
                ans=arr[mid];
                end=mid-1;
            }
        }
        return ans;
}

int main(){
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    int ans=findMin(arr,length);
    cout<<ans<<" ";
    cout<< "hello";

}
