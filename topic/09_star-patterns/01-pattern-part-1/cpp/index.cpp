#include<iostream>
using namespace std;

int main(){

    //------
    ///1.print 5star
    //-------
    // for(int i=1;i<=5;i++){
    //     cout<<"*"<<" ";
    // }

    //------
    ///2.pattern
    //-------
    // for(int i=1;i<=5;i++){

    //     for(int j=1;j<=5;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;   
    // }
    
    //------
    ///3.pattern
    //-------
    // for(int i=1;i<=4;i++){

    //     for(int j=1;j<=5;j++){
    //         cout<<10<<" ";
    //     }
    //     cout<<endl;   
    // }

    //------
    ///4.pattern
    //-------
    // for(int i=1;i<=5;i++){

    //     for(int j=1;j<=5;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;   
    // }

    //------
    ///5.pattern
    //-------
    // for(int i=1;i<=5;i++){

    //     for(int j=1;j<=5;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;   
    // }

    //------
    ///6.pattern
    //-------
    // for(int i=1;i<=5;i++){

    //     for(int j=5;j>=1;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;   
    // }

    //------
    ///7.pattern
    //-------
    // for(int i=1;i<=5;i++){

    //     for(int j=1;j<=5;j++){
    //         cout<<j*j<<" ";
    //     }
    //     cout<<endl;   
    // }

    //------
    ///7.pattern
    //-------
    // for(char i=97;i<=101;i++){
        
    //     for(char j=1;j<=5;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;   
    // }
    //2nd approach
    // for(char i=1;i<=5;i++){
    //     char name='a'+(i-1);
    //     for(char j=1;j<=5;j++){
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;   
    // }

    //------
    ///8.pattern
    //-------
    // for(char i=1;i<=5;i++){
    //     for(char j=1;j<=5;j++){
    //         char name='a'+(j-1);
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;   
    // }

    //------
    ///9.pattern
    //-------
    // for(char i=1;i<=5;i++){
    //     for(char j=1;j<=5;j++){
    //         char name='a'+(j-1);
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;   
    // }

    //------
    ///10.pattern
    //-------
    // int count=0;
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5;j++){
    //        count=count+1;
    //         cout<<count<<" ";
    //     }
    //     cout<<endl;   
    // }
    //2nd approach
    // int count=1;
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5;j++){
           
    //         cout<<count<<" ";
    //         count=count+1;
    //     }
    //     cout<<endl;   
    // }
    //3rd approach
    
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
          cout<<(i-1)*5+j<<" ";   
        }
        cout<<endl;   
    }

    return 0;
}