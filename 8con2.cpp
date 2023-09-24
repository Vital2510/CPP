//Jiya's sequence

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int product = 1;
        for(int i =0; i < n; i++){
            int x;
            cin>>x;
            product = product * x;
        }

        int digit = product % 10;
        if(digit==2 || digit == 3 || digit == 5){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}