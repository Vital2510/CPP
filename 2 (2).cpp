//STRUCTURES


#include <iostream>
using namespace std;
 
 struct phone
    {
        string Name;
        string RAM;
        string ROM;
        string Processor;
        string camera;
        double price;
        
    };
 
 int main()
 {
    
    phone moto;
    //storing the values
    moto.Name = "Samsung";
    moto.RAM = "8Gb";
    moto.ROM = "128Gb";
    moto.Processor = "Qualcomm";
    moto.camera = "48mp";
    moto.price = 17000;
    
    //access the data 
    cout<<"Name of the mobile is : "<<moto.Name<<endl;
    cout<<"ROM Of the mobile is : "<<moto.ROM<<endl;
    cout<<"RAM of the mobie is : "<<moto.RAM<<endl;
    cout<<"Processor of the mobile is : "<<moto.Processor<<endl;
    cout<<"Camera of the mobile is : "<<moto.camera<<endl;
    cout<<"Price of the mobile is : "<<moto.price<<endl;

    return 0;
 }