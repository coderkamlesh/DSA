#include<iostream>
using namespace std;

int peakIndex(int arr[],int n){
    int start=0,end=n-1,mid;

    while(start<end){
        mid=start+(end-start)/2;
        // if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
        //     return mid;
        // }else
         if(arr[mid]>arr[mid+1]){
            end=mid;
        }else{  
            start=mid+1;
        }
    }
    return start;
    // while(start<=end){
    //     mid=start+(end-start)/2;
    //     if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
    //         return mid;
    //     }else if(arr[mid]>arr[mid-1]){
    //         start=mid+1;
    //     }else{
    //         end=mid-1;
    //     }
    // }
    // return -1;
}

int main(){
    int arr[]={1,2,3,4,10,8,6};
    int length=sizeof(arr)/sizeof(arr[0]);
    int ans=peakIndex(arr,length);
    cout<<ans<<" ";
    cout<< "hello";

}
