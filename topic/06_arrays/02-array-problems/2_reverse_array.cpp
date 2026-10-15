#include<iostream>
using namespace std;

void reverse(int arr[],int length){
    // int temp[length];
    //not worked
    // for(int i=length-1;i>=0;i--){
    //     temp[i]=arr[i];
    // }
    // for(int i=0;i<length;i++){
    //     arr[i]=temp[i];
    // }

    //worked brut force
    // int i=length-1;
    // int j=0;
    // while(i>=0){
    //     temp[j]=arr[i];
    //     i--;j++;
    // }
    // int k=0;
    // int l=0;
    // while(k<length){
    //     arr[k]=temp[l];
    //     k++;l++;
    // }

    int i=0;
    int j=length-1;
    while(i<j){
        int temp=arr[i];

        arr[i]=arr[j];;

        arr[j]=temp;
        // swap(arr[i],arr[j]);
        i++;j--;
    }

}

int main(){
    int arr[5]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,length);
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
}