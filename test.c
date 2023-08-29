#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to calculate age, month, and day
void calculateAge(int birthYear, int birthMonth, int birthDay, int *age, int *month, int *day) {
    time_t now;
    struct tm *currentTime;
    time(&now);
    currentTime = localtime(&now);

    *age = currentTime->tm_year + 1900 - birthYear;
    *month = currentTime->tm_mon + 1 - birthMonth;
    *day = currentTime->tm_mday - birthDay;

    // Adjust month and day if negative
    if (*month < 0) {
        *age -= 1;
        *month += 12;
    }
    if (*day < 0) {
        *month -= 1;
        if (*month < 0) {
            *age -= 1;
            *month += 12;
        }
        *day += 30;  // Assuming all months have 30 days
    }
}

int main() {
    int birthYear, birthMonth, birthDay;
    int age, month, day;

    // Get user input for date of birth
    printf("Enter your date of birth (YYYY MM DD): ");
    scanf("%d %d %d", &birthYear, &birthMonth, &birthDay);

    // Calculate age, month, and day
    calculateAge(birthYear, birthMonth, birthDay, &age, &month, &day);

    // Display the calculated values
    printf("Your age is %d years, %d months, and %d days.\n", age, month, day);

    return 0;
}

