//Pointer function
#include <iostream>
using namespace std;
void Square(int *pt);

int main() {
    
    int n=10;
    
    cout<<"Before the operation: "<<n<<endl;
    
    Square(&n);
    
    cout<<"After the Square operation: "<< n;
    return 0;
}

void Square(int *pt)
{
    int temp=*pt;
    temp= temp*temp;
    *pt=temp;
}