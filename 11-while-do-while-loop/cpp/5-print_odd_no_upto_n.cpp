#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no: ";
    cin>>n;
    

    int i=1;
    cout<<"Odd number upto "<<n<<" is ";
    while(i<=n){
        if(i%2!=0){
            cout<<i<<" ";
        }
        i++;
    }

    return 0;
}