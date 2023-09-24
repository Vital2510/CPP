#include<bits/stdc++.h>
using namespace std;


int main()
{
   /* array<int, 10> arr = {0};

    arr.fill(10);       ///{10,10,10,10,10,10,10,10,10,10}
    
    //arr.at(index);

    for(int i=0; i<10;i++){
        cout<<arr.at(i)<<" ";
    }
    */

    //iterators
    //begin(),end(),rbegin(),rend()

 /*   //array<int, 5> arr = {1,3,5,6,7};

    for(auto it= arr.begin(); it!=arr.end(); it++){
        cout<<*it<<" ";
    }
  
    for(auto it= arr.rbegin(); it<arr.rend(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto it = arr.end()-1; it>=arr.begin(); it--){
        cout<<*it<<" ";
    }

    for(auto it: arr)
    {
        cout<<it<<" ";
    }

    string s="Vital";
    for(auto v:s){
        cout<<v;
    }
    */

//VECTOR
    
   /* vector<int> arr;

    arr.push_back(20);  20 
    arr.push_back(10);     {20, 10}
    cout<<arr.size()<<endl;

    arr.pop_back();

    arr.clear();

    vector<int> v1(5,2);
    vector<int> v2(5,3);

    vector<int> v3(v2.begin(),v2.end()) // is same as vector<int> v3(v2);
    
   //example:
    vector<int> s;
    s.push_back(10);
    s.push_back(2);
    s.emplace_back(5);
    s.push_back(20);
    s.push_back(3); //-->{10,2,20,3}

    vector<int> v(s.begin(),s.begin()+4);
    for(auto it:v){
        cout<<it<<" ";
    }

    */
    //lower bound, upper bound;

    // swap swap(v1,v2)
    //begin(),end(),rbegin(),rend()

    //To defining the 2d vectors.
    vector<vector<int>> vec; 

    vector<int> v1;
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(9);

    vec.push_back(v1);
    vec.push_back(v2);
    vec.push_back(v3);

    for(auto sai:vec){
        for(auto it:sai){
            cout<<it<<" ";          //vctr runs on vec and 'it' runs on vctr.
        }
        cout<<endl;

    }

    //define 10x20
    
    vector<vector<int>> vec(10, vector<int>(20,0));

    //array of vectors example
    //vector<int> arr[4];
    //arr[0].push_back(3);

    //3D vectors  (10x20x30)

    vector<vector<vector<int>>> v(10,vector<vector<int>> v(20, vector<int>(30,0)));
//tuples
    tuple <int,string,int ,string> person(1,"vital",4,"xyz");

    //accessing the different values of tuples
    // cout<<person[1]<<endl;
    cout<<get<1>(person)<<endl;
    get<1>(person) = "amelia";
    cout<<get<1>(person)<<endl; //amelia
    
    tuple<int, char, bool, float> thing;
    thing = make_tuple(1,'a', true, 5.0);

    cout<<get<0>(thing)<<endl;
    cout<<get<1>(thing)<<endl;
    cout<<get<2>(thing)<<endl;
    cout<<get<03>(thing)<<endl;
    
    return 0;
}
