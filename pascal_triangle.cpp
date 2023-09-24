//pascal triangle
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

#include<iostream>
using namespace std;

int fact(int n){
    int x =1;
    
    for(int i =n; i>=1; i--){
        x = x*i;
    }
    return x;

}

int main(){
    int n;
    cout<<"Enter no.of rows:";
    cin>>n;

    for(int i = 0; i<n; i++){
        for(int j=0; j<=i;j++){
            int ans = fact(i)/(fact(i-j)*fact(j));
            cout<<ans<<" ";
        }
        cout<<endl;

    }
    
}