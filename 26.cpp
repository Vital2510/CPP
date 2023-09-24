//deletion of  element at particular position in an array.
//happiest
#include<iostream>
using namespace std;

int main(){
    int n, pos, a[10];
    cout<<"Enter the no.of elements:";
    cin>>n;
    for(int i = 0; i<n; i++){
        cout<<"Enter the element "<<i<<" ";
        cin>>a[i];
    }
    n--;
    cout<<"Enter the position to delete an element:";
    cin>>pos;
    for(int i = pos-1; i<=n; i++){
        a[i]=a[i+1];
    }

    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}