#include<bits/stdc++.h>
using namespace std;

int main(){
/*
    set<int> st;
    int n;
    cout<<"Enter No.of elements:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }

    for(auto it:st){
        cout<<it<<" ";
    }
*/
    // Erase functionality
    // st.erase(st.begin());
    // st.erase(st.begin(),st.begin+2);        //[startIterator, EndIterator)
/*
    set<int> st = {1,2,7,8};
    
    auto it = st.find(2);           //it will be iterator to 2
    
    st.emplace(5);

    cout<<st.size()<<endl;

    for(auto it: st){
        cout<<it<<endl;
    }

    st.erase(st.begin, st.end());           //to delete the entire set.
*/ /*
    unordered_set<int> st1;          //not as set i can store elements in anyways(unordered)

    st1.insert(1);
    st1.insert(4);
    st1.insert(3);

    for(auto it:st1){
        cout<<it<<" ";
    }
    
    multiset<int> ms;

    ms.insert(2);
    ms.insert(3);
    ms.insert(2);
    ms.insert(4);
    ms.insert(5);// ms->{2,3,2,4,5}

    ms.erase(2);       //ms->{3,4,5} all the instances will be erased.
    ms.clear();         //clears the entire set

    ms.erase(ms.find(2));   //erases only first instance of 2 i.e only first 2 gets erased.

    ms.count(2)         //gives count no.of times 2 occurs.

    for(auto it:ms){
        cout<<it<<" ";
    }
*/

//MAP
    //map only stores Unique keys
    //logn is the tc
    
    map<string, int> mpp;
    mpp["abhi"]=16;
    mpp["vital"]=8;
    mpp["kiran"]=6;
    mpp["arun"]=92;
    mpp["raj"]=54;      //overrides the 16 which is on top.

    // stores in lexicographical manner.
    // mpp.emplace("raj",06);
    // mpp.erase("vital");   //mpp.erase(key)
    //mpp.erase(mpp.begin());  //mpp.erase(iterator)
    //mpp.erase(mpp.begin(),mpp.begin()+2);    //cleans up a given range.
    //mpp.clear();        //entire map is cleared
    //auto it = mpp.find("vital");     //points where vital lies.

    if(mpp.empty()){
        cout<<"yes it is empty";
    }   

    //printing the map***

    pair<int, int> pr;
    pr.first = 1;
    pr.second = 10;

    for (auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    for(auto it = mpp.begin(); it!=mpp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    //Unordered map
    //doesn'r stores in any order.

    unordered_map<int,int> pr={1,2};

    //pair class
    pair<int,int> pr={1,2};
    pair<pair<int,int>,int> pr={{1,2}, 2};
    cout<<pr.first.second<<endl;    //2
    pair<pair<int,int>, pair<int,int>> pr = {{1,2}, {3,4}};
    cout<<pr.first.first;   //1
    cout<<pr.second.first;  //3

    //pair<pair<pair<int,int>,int>,int> prs;

    vector<pair<int,int>> vec;
    set<pair<int,int>> st;
    map<pair<int,int>,int> mpp;     //1.13

    return 0;
}