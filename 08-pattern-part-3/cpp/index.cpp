#include<iostream>
using namespace std;

int main(){
    // cout<<"Hello Pattern part 3";
    int n;
    cout<<"Enter number: ";
    cin>>n;

    //-------
    //pattern n0. 1
    //-------
    // for(int i=1;i<=n;i++){
    //     for(int j=n-i;j>=0;j--){
    //         cout<<" ";
    //     }
        
    //     for(int k=1;k<=i;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //-------
    //pattern no. 2
    //-------
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<=n-i;j++){
    //         cout<<" ";
    //     }
        
    //     for(int k=1;k<=i;k++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    //-------
    //pattern no.3
    //-------
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<=n-i;j++){
    //         cout<<" ";
    //     }
        
    //     for(int k=1;k<=i;k++){
    //         cout<<k;
    //     }
    //     cout<<endl;
    // }

    //-------
    //pattern no.5
    //-------
    
    // for(int i=1;i<=n;i++){
        
    //     for(int j=0;j<=n-i;j++){
    //         cout<<" ";
    //     }
        
    //     for(char name='A';name<=i+('A'-1);name++){
    //         // name=name+k;
    //         cout<<name;
    //     }
    //     cout<<endl;
    // }



    //-------
    //pattern no.6
    //-------
    
    for(int i=1;i<=n;i++){
        
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        
        for(int k=i;k>=1;k--){
            // name=name+k;
            cout<<k;
        }
        cout<<endl;
    }

    return 0;
}