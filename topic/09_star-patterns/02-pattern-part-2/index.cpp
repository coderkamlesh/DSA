#include<iostream>
using namespace std;

int main(){

    //---------
    ///1.pattern
    //---------
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    //---------
    ///2.pattern
    //---------
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //---------
    ///3.pattern
    //---------
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    //---------
    ///4.pattern
    //---------
    // for(int i=1;i<=5;i++){
    //     for(int j=i;j>=1;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //---------
    ///5.pattern
    //---------
    // for(int i=1;i<=5;i++){
    //     char name='a'+(i-1);
    //     for(int j=1;j<=i;j++){
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    // }

    //---------
    ///6.pattern
    //---------
    // for(int i=1;i<=5;i++){
    //     for(int j=5;j>=i;j--){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    //---------
    ///7.pattern
    //---------
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5-(i-1);j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //---------
    ///8.pattern
    //---------
    for(int i=1;i<=5;i++){
        for(int j=5;j>=5-(i-1);j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}