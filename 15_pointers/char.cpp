#include<iostream>
using namespace std;

int main(){
    char name='k';
    char*  ptr=&name;
    cout<<(void*)&name<<endl;
    cout<<(void*)ptr<<endl;
}