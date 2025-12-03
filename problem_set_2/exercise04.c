#include <stdio.h>
#include <stdbool.h>

int main() {
    int date, days_to_add;
    int day, month, year;
    bool is_leap = false;
    
    // Read date in DDMMYYYY format
    printf("Enter date (DDMMYYYY): ");
    scanf("%d", &date);
    
    // Read number of days to add
    printf("Enter number of days for future appointment: ");
    scanf("%d", &days_to_add);
    
    // Extract day, month, year from DDMMYYYY
    day = date / 1000000;           // output: DD
    month = (date / 10000) % 100;   // output: MM
    year = date % 10000;            // output: YYYY
    
    printf("\nEntered date: %02d/%02d/%d\n", day, month, year);
    
    // Check if year is a leap year
    if (year % 4 == 0) {
        is_leap = true;
        if (year % 100 == 0) {
            if (year % 400 == 0)
                is_leap = true;
            else 
                is_leap = false;
        }
    }
    
    if (is_leap) {
        printf("Year %d is a leap year.\n", year);
    } else {
        printf("Year %d is not a leap year.\n", year);
    }
    
    // Add days to the date
    day = day + days_to_add;
    
    // if day > 30 we move to next month
    while (day > 30) {
        day = day - 30;
        month = month + 1;
        
        // add 1 year after 12 months
        if (month > 12) {
            month = 1;
            year = year + 1;
        }
    }
    
    // Print the future date
    printf("\nFuture appointment date: %02d/%02d/%d\n", day, month, year);
    
    return 0;
}
