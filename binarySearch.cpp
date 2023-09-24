//binarysearch

#include<iostream>
using namespace std;
int binarySearch(int a[], int n, int key){

    int s=0;
    int e=n-1;

    while(s<=e){

        int mid = (s+e)/2;

        if (a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

}
int main(){
    
    int n;
    cout<<"Enter the No.of elements : ";
    cin>>n;

    int a[n];
    for(int i = 0; i<n;i++){
        cout<<"Enter the element "<<i+1<<":";
        cin>>a[i];
    
    }

    int key;
    cout<<"Enter the key element to search : ";
    cin>>key;

    cout<<"Found at index: "<< binarySearch(a, n, key);

    return 0;
}