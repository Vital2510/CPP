#include<bits/stdc++.h>
using namespace std;

int main(){
//single pointer
    // int x = 4;
    // int *p = &x;
    // cout<< *p<<endl;
    // *p = 5;
    // cout << *p;
    
//double pointers

    // int a = 3;
    // int *p,**pp;
    // p = &a;
    // pp = &p;
    // cout<<*p<<endl;
    // cout<<**pp<<endl;
    //**pp = 7;
    //cout<<a<<endl;

//array pointers
 
    int a[10];
    a[0] = 2;
    a[1] = 4;
    cout<<"a:"<<a<<endl;                //address of a array.
    cout<< "&a[0]: "<< &a[0] <<endl;
    cout << "*a:" << *a <<endl;         //2
    cout<< "*a + 1: "<< *a+1<<endl;     //3
    cout<< "&a[1]:" << &a[1]<<endl;     //address
    cout<< "*(a+1): " << *(a+1)<<endl;      //4



    return 0;
}