//Strings

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // char a = 'a';       //only one character is stored in char
    // cout<<a;
    
    string str = "Hello";
    cout<<str<<endl;

    // string s;
    // getline(cin,s);
    // cout<<s<<endl;

    // cout << str[0] <<endl;   //str[index]
    // cout<< str.size();       //Size of the string
    // cin.ignore();          //ignores the new line space 

    // string s;
    // getline(cin,s);
    // string strrev;
    // for(int i=s.size() ; i>=0 ; i--){
    //     // cout<<s[i];
    //     strrev.push_back(s[i]);
    // }
    // cout<<strrev;

    string s;
    cin>>s;
    int last_digit = s[s.size()-1]-'0';
    cout<<last_digit;


}