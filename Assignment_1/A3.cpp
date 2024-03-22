#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;
public:
    void initStudent() {
        rollNo = 0;
        name = "";
        marks = 0.0;
    }
    void printStudentOnConsole()  {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
    void acceptStudentFromConsole()  {
        cout << "Enter Student Roll No: ";
        cin >> rollNo;
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Student Marks: ";
        cin >> marks;
    }
};

int main() {
    int choice;
    Student s;
    do {
        cout << "1. initStudent" << endl;
        cout << "2. printStudentOnConsole" << endl;
        cout << "3. acceptStudentFromConsole" << endl;
        cout << "0. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                s.initStudent();
                break;
            case 2: 
                s.printStudentOnConsole();
                break;
            case 3:
                s.acceptStudentFromConsole();
                break;
            case 0:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Wrong choice..." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
