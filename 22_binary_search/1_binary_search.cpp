#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int k){
        int start=0;
        int end=n-1;

        if(arr[start]==k){
            return start;
        }
        if(arr[end]==k){
            return end;
        }
        
       
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==k){
                return mid;
                break;
            }else if(arr[mid]>k){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }

        return -1;
}


int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size= sizeof( arr) /sizeof(arr[0]);
    // cout<<size;
    int ans= binarySearch(arr,size,6);
    cout<<ans<<endl;

    return 0;
}