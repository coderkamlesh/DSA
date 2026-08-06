#include<iostream>
using namespace std;

int main(){

    int arr[4][3]={{1,2,3},{1,2,3},{1,2,3},{1,2,3}};
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
    char b[] = {83, 65, 78, 84, 65, 78, 85,' ', 83, 65, 85};
    cout<<b;
    // for(int i=0;i<11;i++){
    //    cout<<b[i];
    // }
		
}