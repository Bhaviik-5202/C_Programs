/*  Enter basic salary of an employee and calculate Gross salary according to given 
conditions:- 
-Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic
-Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
-Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic
*/
#include <stdio.h>  

int main() {  
    float basic_salary, hra, da, gross_salary;  

    // Input basic salary  
    printf("Enter the basic salary of the employee: ");  
    scanf("%f", &basic_salary);  

    // Calculate HRA and DA based on basic salary  
    if (basic_salary < 10000) {  
        hra = 0;      // No HRA  
        da = 0;       // No DA  
    } else if (basic_salary >= 10000 && basic_salary < 20000) {  
        hra = basic_salary * 0.20;  
        da = basic_salary * 0.80;  
    } else if (basic_salary >= 20000 && basic_salary < 30000) {  
        hra = basic_salary * 0.25;  
        da = basic_salary * 0.90;  
    } else {  
        hra = basic_salary * 0.30;  
        da = basic_salary * 0.95;  
    }  

    // Calculate gross salary  
    gross_salary = basic_salary + hra + da;  

    // Output the gross salary  
    printf("The gross salary of the employee is: %.2f\n", gross_salary);  

    return 0;  
}
