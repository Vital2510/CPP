//functions - e7

#include<iostream>
using namespace std;
const int N = 1e3 +10;
int a[N][N];
void func(){
    a[0][0] = 5;
}

void printHello(){
    cout<<"Hello World";

}

int sum(int a, int b){
    int result = a + b;
    return result;
}

int digitSum(int n){

    int res = 0;
    while(n){

        int ld = n%10;
        res = res + ld;
        n=n/10;

    }
    return res;
}

void increment(int &n, int n1){
    n++;
    n1++;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    //printHello(); //helloworld
    //sum(5, 3);       //sum of two numbers.

    // int n;
    // cout<<"Enter the values of n: ";
    // cin>>n;
    // cout << digitSum(n)<<endl;

//Sum of two numbers digits sum
    // int a, b;
    // cout << "Enter the values of a and b: ";
    // cin >> a >> b;
    // cout<<digitSum(a) + digitSum(b)<<endl;

//call by value, call by reference.
    // int a = 4;
    // int b = 5;
    // cout<<a << " "<< b<< endl;     //1st one is call by ref and 2nd one call by value
    // increment(a, b);
    // cout<< a << " "<< b << endl;

//swap function.

    // int a = 3;
    // int b = 2;
    // cout<< a<< " "<< b<<endl;
    // swap(a,b);                           //swap is in-bulit in c++.
    // cout<< a << " " << b << endl;

//pass Arrays in function.

    // a[0][0] = 6;
    // cout << a[0][0] <<endl;
    // func();
    // cout<< a[0][0] << endl;
     
    return 0;

    
}