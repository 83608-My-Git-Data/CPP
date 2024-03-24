#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        cout << "Inside Date Constructor" << endl;
        day = 1;
        month = 1;
        year = 1900;
    }

    void acceptDate()
    {
        cout << "Enter day - ";
        cin >> day;
        cout << "Enter month - ";
        cin >> month;
        cout << "Enter year - ";
        cin >> year;
    }

    void displayDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Car
{
private:
    string carName;
    string carNumber;

public:
    Car()
    {
        cout << "Inside Car Constructor" << endl;
        carName = "";
        carNumber = "";
    }
    void acceptCar()
    {
        cout << "Enter car name - ";
        cin >> carName;
        cout << "Enter car number - ";
        cin >> carNumber;
    }
    void displayCar()
    {
        cout << "Car Name - " << carName << endl;
        cout << "Car Number - " << carNumber << endl;
    }
};

class Employee
{
private:
    int empid;
    string name; // Association-> Composition
    double salary;
    Date doj;    // Association-> Composition
    Car *carPtr; // Association-> Aggegration
public:
    Employee()
    {
        cout << "Inside Employee Constructor" << endl;
        empid = 0;
        name = "";
        salary = 0.0;
        carPtr = NULL;
    }
    void acceptEmployee()
    {
        cout << "Enter empid - ";
        cin >> empid;
        cout << "Enter name - ";
        cin >> name;
        cout << "Enter salary - ";
        cin >> salary;
        cout << "Enter Date of Joining - " << endl;
        doj.acceptDate();
    }

    void addCar()
    {
        carPtr = new Car;
        carPtr->acceptCar();
    }

    void displayEmployee()
    {
        cout << "Empid - " << empid << endl;
        cout << "Name - " << name << endl;
        cout << "Salary - " << salary << endl;
        cout << "Date of joining - ";
        doj.displayDate();

        if (carPtr != NULL)
        {
            cout << "Car Details - " << endl;
            carPtr->displayCar();
        }
    }

    ~Employee()
    {
        if (carPtr != NULL)
        {
            delete carPtr;
            carPtr = NULL;
        }
    }
};

int main()
{
    Employee e1;
    e1.acceptEmployee();
    e1.displayEmployee();

    Employee e2;
    e2.acceptEmployee();
    Car *c = new Car;
    e2.addCar();
    e2.displayEmployee();
    return 0;
}