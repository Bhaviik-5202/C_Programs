/*
Read marks of ve subjects. Calculate percentage and print class accordingly. 
Fail below 35, 
Pass Class between 36 to 45, 
Second Class between 46 to 60, 
First Class between 61 to 70, 
Distinction if more than 70 
*/

#include <stdio.h>  
int main() {  
    float marks[5];  
    float total = 0, percentage;  
    char *class;  

    // Input marks for 5 subjects  
    printf("Enter marks for 5 subjects:\n");  
    for (int i = 0; i < 5; i++) {  
        printf("Subject %d: ", i + 1);  
        scanf("%f", &marks[i]);  
        total += marks[i];  
    }  

    // Calculate percentage  
    percentage = (total / 500) * 100;  

    // Determine class  
    if (percentage < 35) {  
        class = "Fail";  
    } else if (percentage >= 36 && percentage <= 45) {  
        class = "Pass Class";  
    } else if (percentage >= 46 && percentage <= 60) {  
        class = "Second Class";  
    } else if (percentage >= 61 && percentage <= 70) {  
        class = "First Class";  
    } else {  
        class = "Distinction";  
    }  

    // Output result  
    printf("Total Marks: %.2f\n", total);  
    printf("Percentage: %.2f%%\n", percentage);  
    printf("Class: %s\n", class);  

    return 0;  
}