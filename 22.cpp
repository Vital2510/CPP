#include<bits/stdc++.h>
using namespace std;

class Person
{
private:
    string name;
    int age;
    float height;

public:
    Person()
    {
        name = "NULL";
        age=0;
        height=0;

    }
    void getData()
    {
        cout<<"Name of the person is :"<<name<<endl;
        cout<<"age of Person is :"<<age<<endl;
        cout<<"height of the person is: "<<height<<endl;

    }
    
};

int main()
{
    Person obj;
    obj.getData();

}