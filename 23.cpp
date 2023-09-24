//Paremetrized constructors
//copy constructors

#include<bits/stdc++.h>
using namespace std;

class Person
{
private:
    int age;
    string name;
    float height;
public:
    Person(string x, int y, float z)      ///Parametrized constructor
    {
        name = x;
        age = y;
        height = z;
    }
    Person(Person &a )               //Copy Constructor
    {
        name = a.name;
        age = a.age;
        height = a.height;

    }

    void getData()
    {
        cout<<endl<<"Name : "<<name;
        cout<<endl<< "Age : "<<age;
        cout<<endl<<"Height : "<<height;
    }
    
};

int main()
{
    Person a("Vital",19,5.2);        //parametrized constructor
    Person b(a);                     //copy constructor
    a.getData();
    b.getData();
    
    return 0;
}

