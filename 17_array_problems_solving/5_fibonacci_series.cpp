#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;

    int arr[1000];

    arr[0]=0;
    arr[1]=1;
    // arr[2]=1;
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<arr[n-1];

    return 0;
}