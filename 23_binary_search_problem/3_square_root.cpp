#include<iostream>
using namespace std;

int squareRoot(int x){
int start=0,end=x,ans;

while(start<=end){
    int mid=start+(end-start)/2;
    if((mid*mid)==x){
        ans=mid;
        break;
    }else if((mid*mid)<x){
        ans=mid;
        start=mid+1;
    }else{
      end=  mid-1;
    }
}

return ans;
}

int main(){
    int ans=squareRoot(100);
    cout<<ans;
}