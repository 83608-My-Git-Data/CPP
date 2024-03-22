#include <iostream>

struct DateStruct {
    int day, month, year;

    void initDate() {
        day = 1;
        month = 1;
        year = 2000;
    }

    void printDateOnConsole() {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }

    void acceptDateFromConsole() {
        std::cout << "Enter day: ";
        std::cin >> day;
        std::cout << "Enter month: ";
        std::cin >> month;
        std::cout << "Enter year: ";
        std::cin >> year;
    }

    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        else
            return false;
    }
};

int main() {
    DateStruct date;
    int choice;

    do {
        std::cout << "\nMenu:\n1. Initialize Date\n2. Print Date\n3. Accept Date\n4. Check Leap Year\n5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                date.initDate();
                std::cout << "Date initialized successfully!\n";
                break;
            case 2:
                date.printDateOnConsole();
                break;
            case 3:
                date.acceptDateFromConsole();
                break;
            case 4:
                if (date.isLeapYear())
                    std::cout << "Yes, it's a leap year!\n";
                else
                    std::cout << "No, it's not a leap year!\n";
                break;
            case 5:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice! Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}
