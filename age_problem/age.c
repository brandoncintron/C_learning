#include <stdio.h>

#define DAYS_IN_YEAR 365

/*
Your goal will be to determine the number of days in between January 1st 
of two different years.

For example, since 2004 was a leap year, the number of days in between 
January 1, 2003 and January 1, 2005 was 731 instead of 730. 
*/ 

int main(void){
    // Ask the user to enter two positive integers indicating the starting and ending years in the duration
    int starting_year, ending_year;

    printf("What is the starting year of your time period?: ");
    scanf("%d", &starting_year);

    printf("What is the ending year of your time period?: ");
    scanf("%d", &ending_year);

    int year_difference = ending_year - starting_year;
    // How many days are there for the difference of years?
    int days_in_difference = year_difference * DAYS_IN_YEAR;

    // Loop through the difference of years to check if there's a leap year between them
    for(int i = 1; i < year_difference + 1; i++){
        int year = starting_year + i;
        // A leap year occurs every four years, check if divisible by 4
        if (year % 4 == 0){
            // If there is a leap year, increment the amount of days between the year difference
            days_in_difference++;
        }
    }
    
    // Output the number of days in the specified duration
    printf("There are %d days in between 1/1/%d and 1/1/%d.\n", days_in_difference, starting_year, ending_year);

    return 0;
}