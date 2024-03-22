#include<iostream>
using namespace std;

class Tollbooth{
    private:
    int totalCars;
    double amountcollected;

    public:

    Tollbooth(){
        totalCars = 0;
        amountcollected = 0.0;

    }

    void payingCar(){
        totalCars = totalCars + 1;
        amountcollected = amountcollected+0.50;
    }

    void noPayCar(){
        totalCars = totalCars + 1;
    }
    
    void printOnConsole(){
        int totalCarMadePayment = amountcollected/0.50;
        cout<<"Total cars passed: "<<totalCars<<endl;
        cout<<"Total toll collected: "<<amountcollected<<endl;
        cout<<"Number of cars who made toll payment: "<<totalCarMadePayment<<endl;
        cout<<"Number of cars who did not paid toll: "<<totalCars-totalCarMadePayment<<endl;

    }



};

int main(){

    int choice;
    Tollbooth t;

    while (true)
    {
    cout<<"press 0: for exit"<<endl;
    cout<<"Press 1: To add paying car"<<endl;
    cout<<"Press 2: To add non paying car"<<endl;
    
    

    cin>>choice;


    switch (choice)
    {
    case 0:
        return 0;
    case 1:
    {
       
        t.payingCar();
        t.printOnConsole();
        break;
    }
    case 2:
    {
        
        t.noPayCar();
        t.printOnConsole();
        break;
    }
    default:
        break;
    }

        
    }
    

    

    
   
    

    


    return 0;

}