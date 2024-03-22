#include <iostream>
#include <string>
using namespace std;

// Class definition for Student
class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // Function to initialize student
    void initStudent() {
        rollNo = 0;
        name = "";
        marks = 0.0f;
    }

    // Function to print student on console
    void printStudentOnConsole() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    // Function to accept student from console
    void acceptStudentFromConsole() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore(); // Clear the input buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }
};

int main() {
    Student myStudent;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Print Student\n";
        cout << "2. Accept Student\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                myStudent.printStudentOnConsole();
                break;
            case 2:
                myStudent.acceptStudentFromConsole();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    } while(choice != 3);

    return 0;
}
