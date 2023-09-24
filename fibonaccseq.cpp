//fibonacci sequence using functions

#include<iostream>
using namespace std;

void fib(int n){
    int t1=0;
    int t2=1;
    int t3=0;
    
    cout<<t1<<" "<<t2<<" ";

    for(int i = 2;i<=n-1; i++){
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        cout<<t3<<" ";

    }

}

int main()
{
    int n;
    cout<<"Enter the range of fib You want:";
    cin>>n;
    
    fib(n);
    return 0;

}