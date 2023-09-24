//MAX OF FOUR NUMBERS


#include <bits/stdc++.h>
using namespace std;

int max(int a, int b, int c, int d);

int main()
 {
    int a=0, b=0, c=0, d=0;
    cout<<"Enter values of a,b,c,d:";
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    int ans = max(a, b, c, d);
    cout<<ans<<" is the maximum of 4 numbers";
    
    return 0;
}


int max(int a,int b,int c,int d)
{
    int n1,n2;
    
    if (a>b)
    {
        n1=a;
    }
    else 
    {
        n1=b;
    }
    if (c>d)
    {
        n2=c;
        
    }
    else
    {
    n2=d;
    }
    
    if (n1>n2)
    {
        return n1;
    }
    else 
    {
        return n2;
    }
}
