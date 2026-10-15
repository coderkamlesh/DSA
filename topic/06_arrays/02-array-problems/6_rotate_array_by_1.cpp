#include<iostream>
using namespace std;

void rotateArray(int *arr,int length ){
  
    int temp=arr[length-1];
    for(int i=length-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

int main(){
    int arr[6]={9,3,5,4,2,8};
      int length=sizeof(arr)/sizeof(arr[0]);
    rotateArray(arr,length);
    for(int i=0;i<length;i++){
        cout<< arr[i] << " ";
    }

    return 0;
}