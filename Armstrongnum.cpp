//armstrong number -->inprogress

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int i=3,s=0;
    int originaln=n;

    while(n!=0)
    {
        int ld = n%10;
        s += (int) pow(ld,i);
        n=n/10;
    }
    if(originaln==s)
    {
        cout<<"Armstrong Number"<<endl;
    }
    return 0;
}