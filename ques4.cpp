//range of prime numbers using functions

#include<iostream>
using namespace std;

bool isPrime(int x){
    for(int i =2;i<x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;

}

int main(){
    int a,b,n;
    cout<<"Enter the values of a and b:";
    cin>>a>>b;
    for(int i = a; i<=b;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }

}