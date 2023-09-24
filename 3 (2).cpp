//NESTING OF STRUCTURE

#include <iostream>
using namespace std;
 
 struct camera
 {
     int rear;
     int front;
 };
 struct phone
{
    string Name;
    int RAM;
    int ROM;
    string Processor;
    camera cam;
    double price;
};
 
 int main()
 {
    
    phone moto;
    //storing the values
    moto.Name="Vital";
    moto.RAM=8;
    moto.ROM=128;
    moto.Processor="qualcomm";
    moto.cam.rear=48;
    moto.cam.front=8;
    moto.price=90000;
    
    //access the data 
    cout<<"Name of the mobile is:"<<moto.Name<<endl;
    cout<<"ROM Of the mobile is: "<<moto.ROM<<endl;
    cout<<"RAM of the mobie is: "<<moto.RAM<<endl;
    cout<<"rear camera is :"<<moto.cam.rear<<endl;
    cout<<"Front camera is :"<<moto.cam.front<<endl;
    cout<<"Price of the mobile is: "<<moto.price<<endl;
    return 0;
 }
 