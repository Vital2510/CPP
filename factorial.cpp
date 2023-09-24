//factorial of a number using functions

#include<iostream>
using namespace std;
void fact(int n){
    int x = 1;

    for(int i =n;i>=1;i--){
        x = x*i; 
    }
    cout<<x;

}

int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    fact(n);

    return 0;
}