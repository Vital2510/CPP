#include<bits/stdc++.h>
using namespace std;

int main()
{
//     pair<int,int> p;
//     p={2, 3};
//     cout<<p.first<<" "<<p.second<<endl;

//     p=make_pair(4,5);
//     cout<<p.first<<" "<<p.second<<endl;
// s
//     pair<int, string> p_arr[3];
//     p_arr[0]={1,"apple"};
//     p_arr[1]={2,"banana"};
//     p_arr[2]={3,"Carrot"};

//     for(int i=0;i<3;i++)
//     {
//         cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
//     }

    vector<pair<int,string>> v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        string s;
        cin>>s;
        v.push_back({num, s});
    }

    for(auto it:v)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    
}