//Inserting the element at begin position of an array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10],n,e;
    cout<<"Enter the size of array:";
    cin>>n;
    for(int i =0; i<n;i++){
        cout<<"Enter the element : ";
        cin>>a[i];
    }
    
    n++;
    cout<<"Enter the new element to insert at begin position";
    cin>>e;

    for (int i = n-1; i>=0; i--){
        a[i]=a[i-1];
    }
    a[0]=e;

    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}