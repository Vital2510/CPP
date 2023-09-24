//insertion new element at particular position in an array.

#include<iostream>
using namespace std;

int main(){
    int n, pos, a[10],ele;
    cout<<"Enter the no.of elements:";
    cin>>n;
    for(int i = 0; i<n; i++){
        cout<<"Enter the element "<<i<<" ";
        cin>>a[i];
    }
    n++;
    cout<<"Enter the position to place the element: ";
    cin>>pos;
    for(int i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }

    cout<<"Enter the element to insert at position";
    cin>>ele;
    a[pos-1]=ele;
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";

    }

    return 0;
}