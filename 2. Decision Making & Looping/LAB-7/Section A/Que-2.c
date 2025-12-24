// . Print number of days in a month using switch. // 
#include <stdio.h>  

int main() {  
    int month;  
    printf("Enter month (1-12): ");  
    scanf("%d", &month);  

    switch(month) {  
        case 1: // January  
        case 3: // March  
        case 5: // May  
        case 7: // July  
        case 8: // August  
        case 10: // October  
        case 12: // December  
            printf("31 Days\n");  
            break;  
        case 4: // April  
        case 6: // June  
        case 9: // September  
        case 11: // November  
            printf("30 Days\n");  
            break;  
        case 2: // February  
            printf("28 or 29 Days\n");  
            break;  
        default:  
            printf("Invalid month\n");  
    }  
    return 0;  
}