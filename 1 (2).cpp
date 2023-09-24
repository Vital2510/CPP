#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Prod(int num)
{
    if(num==0) return 1;
    int a = num%10;
    if(a==0)
    {
        return Prod(num/10);
    }
    return a * Prod(num/10);
}

int main() {
    int n;
    cin>>n;
    if(n==0)
    cout<<0;
    else
    cout<<Prod(n);
}
