#include <stdio.h>
void main() {
    int hh, mm, ss;

    printf("Enter Seconds: ");
    scanf("%d", &ss);

    hh = ss / 3600;
    ss %= 3600;
    mm = ss / 60;
    ss %= 60;
    
    printf("%d : %d : %d", hh,mm,ss);

}