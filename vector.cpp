#include<bits/stdc++.h>
using namespace std;

void Printvec(vector<string> v)
{
    cout<<"Size is : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
}

void Printvec(vector<pair<int,int>> &v)
{
    for(int i=0;i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

int main()
{
//vector pairs
    // vector<string> s;
    // s.push_back("Vital");
    // s.push_back("yash");
    // s.push_back("arun");

    // Printvec(s);
    // vector<string> s1=s;
    // s1.push_back("sam");
    // Printvec(s1);
//vector of vectors
    vector<int> vec[3];
    vec[0].push_back(1);
    vec[0].push_back(2);
    vec[1].push_back(3);

    for(int i =0;i<vec;i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

//vectors of pairs
    // vector<pair<int,string>> s;
    // s.push_back({1,"Vital"});
    // s.push_back(make_pair(2,"Yash"));
    // s.push_back({3,"Arun"});

    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i].first<<" "<<s[i].second;
    //     cout<<endl;
    // } 


//array of vectors
    // int n;
    // cin>>n;
    // vector<int> v[n];

    // for(int i=0;i<n;i++)
    // {
    //     int num;
    //     cin>>num;
    //     for(int j=0;j<num;j++)
    //     {
    //         int x;
    //         cin>>x;
    //         v[i].push_back(x);
    //     }
    // }

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<v[i].size();j++)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

//vector of vectors

}