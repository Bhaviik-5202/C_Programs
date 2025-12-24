/* Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3
 days]
*/

#include <stdio.h>  
int main() {  
    int totalDays;  
    int years, weeks, days;  

    // Input number of days  
    printf("Enter the number of days: ");  
    scanf("%d", &totalDays);  

    // Calculate years, weeks and days  
    years = totalDays / 365;          // Assuming 1 year = 365 days  
    totalDays %= 365;                 // Remaining days after calculating years  

    weeks = totalDays / 7;            // 1 week = 7 days  
    days = totalDays % 7;             // Remaining days after calculating weeks  

    // Output the result  
    printf("%d days = %d years, %d weeks, and %d days\n", totalDays, years, weeks, days);  

    return 0;  
}