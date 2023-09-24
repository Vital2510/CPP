//nCr 

#include<iostream>
using namespace std;

int fact(int n){
    int x = 1;
    for(int i = n; i>=1;i--){
        x = x*i;
    }

    return x;
}

int main(){
    int n,r;
    cin>>n>>r;

    int ans = fact(n)/(fact(n-r)*fact(r));
    cout<<ans;
    return 0;
}