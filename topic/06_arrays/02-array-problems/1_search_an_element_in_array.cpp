#include<iostream>
using namespace std;


int searchIndex(int arr[],int n,int target){
    
    for (int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }

    return -1;
}
int main(){
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    int target=3;
    cout<<searchIndex(arr,length,target)<<endl;
}