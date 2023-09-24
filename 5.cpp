#include<iostream>
using namespace std;

int main()
{
    // int a[10]= {1,2,3,4,5,6,7,8,9,0};
    // a[11]          //segmentation fault

  
  //2D - arrays
    int a, b;
    cout<<"Enter No.of rows and columns : ";
    cin>>a>>b;
    
    int arr[a][b];

    for(int i = 0; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for(int i = 0; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
}