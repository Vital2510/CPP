#include<iostream>
#include<string>
using namespace std;

class house 
{
private :
    int length = 0,breadth = 0;
public:
    void setData(int x, int y)
    {
        length = x;
        breadth = y;
    }
    void area()
    {
        cout<<"Area is :"<<length * breadth;
    }
};

int main() {
    
    house h1,h2;
    
    h1.setData(5,6);
    h1.area();
    
    cout<<endl;
    
    h2.setData(7,8);
    h2.area();
    
    
    return 0;
}