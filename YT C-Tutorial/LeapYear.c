#include <stdio.h>
void main() {

    int year;
    printf("Enter year : ");
    scanf("%d", &year);

    if ( year % 4 == 0) {
        if ( year % 100 == 0) {
                if ( year % 400 == 0) { 
                    printf("Leap Year %d.", year);
                }
                else {
                    printf("Not Yeap year %d.", year);
                }
        }
        else {
            printf("Leap Year %d.", year);
        }
    }
    else {
        printf("Not Leap Year %d.", year);
    }

}