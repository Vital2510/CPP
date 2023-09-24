// CLASSES

#include <iostream>
using namespace std;

class house
{
private:
    int length = 0, breadth = 0;

public:
    void set_data(int x, int y)
    {
        length = x;
        breadth = y;
    }
    void area()
    {
        cout << length * breadth;
    }
};

int main()
{

    house h1;
    h1.set_data(500, 300);
    h1.area();

    return 0;
}