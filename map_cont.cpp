#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<int, string> m1;
    //map contain sorted key value pair

    map<int , string> m2= {{100,"vital"}, {101,"kellvin"}, {102,"xyz"}};
    
    //methods
    //insering
    m2[103]="sam"; 

    for(map<int,string>::iterator it=m2.begin(); it!=m2.end(); it++)
    {
        cout<<it->first<<" ";

        cout<<it->second<<" ";
        cout<<endl;
    }

    // int n;
    // cin>>n;

    // map<string, int> m;

    // for(int i=0;i<n;i++)
    // {
    //     string s;
    //     cin>>s;
    //     m[s]++;
    // }
    // for(auto pr:m)
    // {
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }




}