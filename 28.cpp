#include<iostream>
using namespace std;

int main()
{
//references
    // int a = 2;
    // int &b = a;
    // int &c = b;
    // c = 4;  //b is just another name of a
    // //references are initialized immedialtely with their declaration.
    // //types should also match
    // cout<<a<<endl;
    // cout<<b<<endl;
    // cout<<c<<endl;

//pointers
    {
        int a = 5;
        int * z = &a;
        *z=6;
        cout<<z<<" "<<*z<<" "<<&z<<endl;

        int x[] ={ 1,2,3,4};
        int *y=x;
        cout<<*y<<" "<<*x<<" "<<*(x+1)<<endl;
    }
}