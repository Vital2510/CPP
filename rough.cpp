#include <bits/stdc++.h>
using namespace std;

int getShoePairs(vector<vector<int>> v)
{
    int count = 0;
    map<int,int> mp;

    for(int i=0;i<v.size();i++)
    {
        vector<int> curr = v[i];
        int lor = curr[0];
        int sz = curr[1];
        int presentLOR;

        if(mp.find(sz)!=mp.end())
        {
            presentLOR = mp[sz];
            if(presentLOR == 0 and lor==1)
            {   
                count++;
                mp.erase(sz);
            }
            else if(presentLOR==1 and lor==0)
            {
                count++;
                mp.erase(sz);
            }
            
        }

        else
        {
            mp.insert({sz,lor});
        }
    }
    return count;
}

int main() {

    //1 3 7 15 31 

    int n=0,i=0;

    while(true)
    {

        n = n + pow(2,i);
        if(n<=10000)
        {
            cout<<n<<" ";
        }
        else break;
        i++;
    }

}