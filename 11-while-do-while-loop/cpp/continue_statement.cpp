#include<iostream>
using namespace std;

int main(){
    int i=1;

    while(i<=10){
        if(i%4==0){
             i++;
            continue;
        }
            
        cout<<i<<" ";
        i++;
    };

    // for(int i=1;i<=10;i++){
    //     if(i%4==0){
    //         continue;
    //     }
    //     cout<<i<<" ";
    // }

    return 0;
}