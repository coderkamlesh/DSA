#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no: ";
    cin>>n;
    

    int i=1;
    cout<<"list of factorial no of "<<n<<" is ";
    while(i<=n){
        if(n%i==0){
            cout<<i<<" ";
        }
        i++;
    }

    return 0;
}