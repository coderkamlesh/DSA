#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height){
    int n=height.size();
    int leftMax=0,rightMax=0,maxHeight=height[0],index=0,water=0;

    //max height
    for(int i=1;i<n;i++){
        if(maxHeight<height[i]){
            maxHeight=height[i];
            index=i;
        }
    }

    //left part
    for(int i=0;i<index;i++){
        if(leftMax>height[i]){
            water+=leftMax-height[i];
        }else{
            leftMax=height[i];
        }
    }

    //right part
    for(int i=n-1;i>index;i--){
        if(rightMax>height[i]){
            water+=rightMax-height[i];
        }else{
            rightMax=height[i];
        }
    }

    return water;
}

int main(){
    vector<int> height={4,2,0,5,2,6,2,3};
    cout<<trap(height)<<endl;
    
}