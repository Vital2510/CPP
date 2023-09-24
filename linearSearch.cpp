#include<iostream>
using namespace std;

int linearSearch(int a[], int n, int key){
    for(int i = 0; i<n; i++){
        if(a[i]==key){
            return i;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the No.of elements:";
    cin>>n;

    int a[n];
    for( int i = 0; i<n; i++){
        cout<<"Enter the element "<<i+1;
        cin>>a[i];
    }

    int key;
    cout<<"Enter the key element to search: ";
    cin>>key;

    cout<<"Found at index:"<<linearSearch(a, n, key);

}