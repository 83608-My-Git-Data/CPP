#include <iostream>
using namespace std;

class Address {
    private:
    string  building;
    string street;
    string city;
    int pin;

    public: 
    Address() {
        // this->building = building;
        // this->street = street;
        // this->city = city;
        // this->pin = pin;
    }

    void acceptDetails() {
        cout<<"Enter building name"<<endl;
        cin>>building;
        cout<<"Enter street name"<<endl;
        cin>>street;
        cout<<"Enter City Name"<<endl;
        cin>>city;
        cout<<"ENter the pin"<<endl;
        cin>>pin;
    }
    void displayDetails() {
        cout<<building<<endl;
        cout<<street<<endl;
        cout<<city<<endl;
        cout<<pin<<endl;
    }
    string getBuilding() {
        return building;
    }
    void setBuilding(string newBuilding) {
        this->building = newBuilding;

    }
};


    int main() {
    Address a1;

    // Set building name using setBuilding()
    a1.setBuilding("Oracle");

    // Get and print the building name using getBuilding()
    cout << "Building Name: " << a1.getBuilding() << endl;

    // Accept and display full address details
    a1.acceptDetails();
    a1.displayDetails();

    return 0;
}





