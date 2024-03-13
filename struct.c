#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};

// Function to read a date from the user
struct Date readDate() {
    struct Date date;
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &date.day, &date.month, &date.year);
    return date;
}

// Function to display a date
void displayDate(struct Date date) {
    printf("%d/%d/%d", date.day, date.month, date.year);
}

// Function to compare two dates for equality
int compareDates(struct Date date1, struct Date date2) {
    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
        return 1; // Dates are equal
    } else {
        return 0; // Dates are not equal
    }
}

int main() {
    struct Date date1, date2;

    // Read two dates from the user
    printf("Enter the first date:\n");
    date1 = readDate();

    printf("Enter the second date:\n");
    date2 = readDate();

    // Display the dates
    printf("First date: ");
    displayDate(date1);
    printf("\n");

    printf("Second date: ");
    displayDate(date2);
    printf("\n");

    // Compare the dates
    if (compareDates(date1, date2)) {
        printf("The dates are equal.\n");
    } else {
        printf("The dates are not equal.\n");
    }

    return 0;
}
