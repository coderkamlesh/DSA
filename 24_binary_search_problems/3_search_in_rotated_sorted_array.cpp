/*
Problem: Search in Rotated Sorted Array.
Problem description: Ek sorted array diya gaya hai jo kisi point se rotate ho gaya hai (jaise [4,5,6,7,0,1,2]). 
Humein ismein ek 'target' element ko search karna hai. Agar element mil jata hai toh uska index return karna hai, warna -1. 
Humein ise O(log n) time complexity mein solve karna hai binary search ka use karke.
*/
#include<iostream>
using namespace std;

int search(int arr[],int n,int target){
    int start=0,end=n-1,mid;

    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[start]<=arr[mid]){
            if(target>=arr[start] && target<arr[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }else{
            if(target>arr[mid] && target<=arr[end]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    int target=4;
    int ans=search(arr,length,target);
    cout<<ans<<" ";

}