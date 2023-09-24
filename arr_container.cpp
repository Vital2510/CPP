#include<bits/stdc++.h>
using namespace std;

int main()
{
    // array<T,N> arr;
    // T=data type
    // N= size

    array<int,5> arr1;

    for(int i=0;i<5;i++)
    {
        arr1[i]=i;
    }

    for(int i=0;i<5;i++)
    {
        cout<<arr1[i]<<" ";
    }
    array<int,5> arr2;

    //methods

    cout<<arr1.at(2)<<endl;
    cout<<arr1[3]<<endl;        //elem at particular index

    cout<<arr1.front()<<endl;       //returns first element

    cout<<arr1.back()<<endl;        //returns last element

    cout<<arr1.fill(0)<<endl;     //fills the entire array with zero

    cout<<arr1.swap(arr2)<<endl;    //swaps two arrays

    cout<<arr1.empty();         //empty the array

    cout<<"size() - "<<arr1.size()<<endl;       //size of array filled

    cout<<"max size() - "<<arr1.max_size()<<endl;       //max_size of array

}