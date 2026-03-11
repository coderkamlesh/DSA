#include<iostream>
using namespace std;
 bool pairDiff(int arr[],int n,int diff){
    int start=0,end=n-1;
    while(start<end){
        if(arr[end]-arr[start]==diff){
            return true;
        }
        else if(arr[end]-arr[start]>diff){
            end--;
        }
        else{
            start++;
        }
    }
    return false;
 }

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int diff=2;
    if(pairDiff(arr,n,diff)){
        cout<<"Pair found"<<endl;
    }else{
        cout<<"Pair not found"<<endl;
    }
    return 0;
}