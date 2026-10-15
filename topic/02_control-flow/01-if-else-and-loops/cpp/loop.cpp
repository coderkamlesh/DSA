#include<iostream>
using namespace std;

int main(){

    //for loop
    //ex=1 =>print coder kamlesh 5 times
    // for(int i=0;i<5;i=i+1){
    //     cout<<"Coder Kamlesh"<<endl;
    // }

    // ex=2 => print n natural of number
    // int n;
    // cout<<"Give number: ";
    // cin>>n;
    // for(int i=1;i<=n;i=i+1){
    //     cout<<i<<endl;
    // }

    // ex=3=> print square
    // int n;
    // cout<<"Enter no: ";
    // cin>>n;
    // for(int i=1;i<=n;i=i+1){
    //     cout<<i<<" Square is: "<<i*i<<endl;
    // }

    //ex=4 => Print all Even no upto n;
    int n;
    cout<<"Enter the no: ";
    cin>>n;
    for(int i=1;i<=n;i=i+1){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
}