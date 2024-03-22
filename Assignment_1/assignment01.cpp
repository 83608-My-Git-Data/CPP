#include <stdio.h>

// Structure definition for Date
struct Date {
    int day;
    int month;
    int year;
};

// Function to initialize date
void initDate(struct Date* ptrDate) {
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2000;
}

// Function to print date on console
void printDateOnConsole(struct Date* ptrDate) {
    printf("Date: %02d/%02d/%04d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}

// Function to accept date from console
void acceptDateFromConsole(struct Date* ptrDate) {
    printf("Enter day, month, and year (separated by spaces): ");
    scanf("%d %d %d", &ptrDate->day, &ptrDate->month, &ptrDate->year);
}

int main() {
    struct Date myDate;
    int choice;

    // Initialize date
    initDate(&myDate);

    do {
        printf("\nMenu:\n");
        printf("1. Print Date\n");
        printf("2. Accept Date\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printDateOnConsole(&myDate);
                break;
            case 2:
                acceptDateFromConsole(&myDate);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while(choice != 3);

    return 0;
}


