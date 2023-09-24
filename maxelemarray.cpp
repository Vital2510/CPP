#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter No.of elements: ";
    cin>>n;

    int a[n];
    for(int i = 0; i<n; i++){
        cout<<"Enter the element"<<i+1<<":";
        cin>>a[i];
    }

    int mx = a[0];
    for(int i=0;i<n;i++){
        mx = max(mx,a[i]);
    }

    cout<<"Max element is :"<<mx;
}