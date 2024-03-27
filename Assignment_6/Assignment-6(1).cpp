#include<iostream>
using namespace std;

class Date {
    private :
    int day;
    int month;
    int year;

    public : 
    void acceptDate() {
        cout<<"Enter day";
        cin>>day;
        cout<<"Enter month";
        cin>>month;
        cout<<"Enter year";
        cin>>year;
    }

    void displayDate() {
        cout<<"day is"<<day<<endl;
        cout<<"month is"<<month<<endl;
        cout<<"year is"<<year<<endl;
    }  


};

class Person {

    private:
    string name;
    string address;
    Date dob;

    public:  
     virtual void acceptData() {
        cout<<"name is";
        cin>>name;
        cout<<"address is";
        cin>>address;
        cout<<"date of birth is";
        dob.acceptDate();
     }
     virtual void displayData() {
        cout<<"person name is - "<<name<<endl;
        cout<<"person address is - "<<address<<endl;
        cout<<"person date of birth is - ";
        dob.displayDate();
     }
};

class Employee : public Person {
    private :

    int empid;
    string dept;
    double salary;
    Date doj;

    public : 

     void acceptData() {

        cout<<"Enter empid";
        cin>>empid;
        cout<<"enter dept";
        cin>>dept;
        cout<<"enter salary";
        cin>>salary;
        cout<<"doj";
        doj.acceptDate();
        // Person:: acceptData();

        }

     void displayData() {

        cout<<"empid is - "<<empid<<endl;
        cout<<"dept is - "<<dept<<endl;
        cout<<"salary is - "<<salary<<endl;
        cout<<"date of joining is - ";
        doj.displayDate();
        // Person::displayData();
    }
};




int main () {

    // Person p;
    // p.acceptData();
    // p.displayData();

    // Employee e;
    // e.acceptData();
    // e.displayData();

    Person *ptr = new Employee();
    ptr->acceptData();
    ptr->displayData();
    return 0;





}