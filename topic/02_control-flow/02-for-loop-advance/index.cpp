#include<iostream>
using namespace std;

int main(){
    //ex=1 =>print 101 to 200
    // for(int i=101;i<=200;i=i+1){
    //     cout<<i<<" ";
    // }

    //ex=2 => print a to z
    // char name='a';
    // for(name;name<='z';name=name+1){
    //     cout<<name<<" ";
    // }

    // ex=3 =>
    //print n of number in descending order
    // int n;
    // cout<<"Enter the No.: ";
    // cin>>n;
    // for(int i=n;i>=1;i=i-1){
    //     cout<<i<<" ";
    // }

    //ex=4 print 1 to 100 in this order 1,4,7,10,13
    // for(int i=1;i<=100;i=i+3){
    //     cout<<i<<" ";
    // }

    //ex=5=>print table of n;
    // int n;
    // cout<<"Enter the no: ";
    // cin>>n;
    // for(int i=1;i<=10;i=i+1){
    //     cout<<n*i<<endl;
    // }

    //ex=6=>print power of n;
    // int n,pow,result;
    // cout<<"Enter the no: ";
    // cin>>n;
    // cout<<"Enter the power: ";
    // cin>>pow;
    // for(int i=1;i<=pow;i++){
    //     result=n*n;
    // }
    // cout<<result<<endl;

    // ex=7 => sum of n natural number
    // int n,sum=0,i;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for(i=1;i<=5;i++){
    //     sum=sum+i;
    // }
    // cout<<sum<<endl;

    //another way by formula
    // cout<<(n*(n+1))/2;

    // ex=8=> factorial number
    //     int n;
    
    // // Prompt the user to enter the number
    // cout << "Enter the number: ";
    // cin >> n;

    // int fact = 1;
    // for (int i = 1; i <= n; i = i + 1) {
    //     fact = fact * i;
    // }

    // // Print the result
    // cout << fact << endl;

    // //-----------
    // //prime number
    // //-----------
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // if(n<2){
    //     cout<<"Not prime";
    //     return 0;
    // }else{
    //     for(int i=2;i<n;i++){
    //         if(n%2==0){
    //             cout<<"Not prime";
    //             return 0;
    //         }
    //     }
    //     cout<<"Prime";
    // }

    //-----------
    //fibonacci series
    //-----------
    int n,next;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Fibonacci series upto "<<n<<" terms: "<<endl;

    int first=0;
    int second=1;
    

    for(int i=1;i<=n;i++){
        cout<<first<<" ";
        next=first+second;
        first=second;
        second=next;
    }

}