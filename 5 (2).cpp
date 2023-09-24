#include <iostream>
using namespace std;

class Test
{
    private:
    int data;
    public:
    void set_data(int set) 
    {
        data= set;
    }
    int get_data()
    {
        return data;
    }
};

int main() {
    
    Test *ptr=new Test;
    //allocates a block of memory
    ptr->set_data(10);
    cout<< "Value is :"<<ptr->get_data();
    return 0;
}