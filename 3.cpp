#include<iostream>
using namespace std;

int main(){
/*
    // int a = 2;
    // int b = 3;
    // int c = 1;

    // cout<< (a<=b);
    // cout<< ((b>a) || (b>c)) << endl;

    // int n;
    // cin>>n;
    // if (n%2==0){
    //     cout<<"Yes";
    // }
    // else if(n%3 == 0){
    //     cout << "Divisible by 3";

    // }
    // else{
    //     cout<<"NO";
    // }
    */

//loops
    // int main()
    // {
    //     // for loop
    //     for(int i=0;i<=n;i++){
    //         cout<<i;
    //     }
    //     // while loop
    //     while(i<=10){
    //         cout<<i;
    //         i++;
    //     }

        


    // }

    int t;
    cout<<"Enter No.of Test Cases:"<<endl;
    cin>>t;
    if(t>0){
        while(t--){
            int n;
            cout<<"Enter n Value: "<<endl;
            cin>>n;
            int s=0;
            while(n>0){
                int c = n%10;
                s += c;
                n = n/10;

            }
            cout << s << endl;
    

        }
    }
//break and continue statments

//     while(true){
//         int x;
//         cin>>x;
//         if (x==42){
//             break;
//         }
//         cout<<x<<endl;

//     }

    return 0;
}