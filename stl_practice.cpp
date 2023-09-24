#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> vec;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    vector<int> s;
    s.push_back(3);
    s.push_back(4);

    vec.push_back(v);
    vec.push_back(s);

    for(auto vect:vec)
    {
        for(auto it:vect)
        {
            cout<<it<<" ";
        }
    }
	
    return 0;
}