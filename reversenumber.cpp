//Reversing of a Number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int rev=0;
    
    while(n>0)
    {
        int c = n%10;
        rev = rev*10 + c;
        n=n/10;
    }
    cout<<rev<<endl;

    return 0;
}