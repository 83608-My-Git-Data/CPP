#include <iostream>

using namespace std;

class Box {
private:
    double length, width, height;

public:
    // Parameterless constructor
    Box() {
        length = 1.0;
        width = 1.0;
        height = 1.0;
    }

    // Parameterized constructor with three parameters
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Single parameterized constructor
    Box(double side) {
        length = side;
        width = side;
        height = side;
    }

    // Function to calculate volume
    double calculateVolume() {
        return length * width * height;
    }
};

int main() {
    int choice;
    double l, w, h;

    do {
        cout << "Menu:\n";
        cout << "1. Calculate Volume with default values\n";
        cout << "2. Calculate Volume with length, breadth, and height with the same value\n";
        cout << "3. Calculate Volume with different length, breadth, and height values\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
            {
                Box box1; // Creating object using parameterless constructor
                cout << "Volume with default values: " << box1.calculateVolume() << endl;
                break;
            }
            case 2:
            {
                cout << "Enter the value for length, breadth, and height: ";
                cin >> l;
                Box box2(l); // Creating object using single parameterized constructor
                cout << "Volume with same values: " << box2.calculateVolume() << endl;
                break;
            }
            case 3:
            {
                cout << "Enter the values for length, breadth, and height: ";
                cin >> l >> w >> h;
                Box box3(l, w, h); // Creating object using parameterized constructor
                cout << "Volume with different values: " << box3.calculateVolume() << endl;
                break;
            }
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 4);

    return 0;
}
