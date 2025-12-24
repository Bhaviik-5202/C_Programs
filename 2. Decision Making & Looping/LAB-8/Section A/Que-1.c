//  Print 1 to 10 then modify program Print 1 to n using while and do while loop. //
#include <stdio.h>  

int main() {  
    int n, i = 1;  
    printf("Enter a number: ");  
    scanf("%d", &n);  

    // While loop  
    while (i <= n) {  
        printf("%d\n", i);  
        i++;  
    }  

    i = 1; // Reset i for the do-while loop  

    // Do-While loop  
    do {  
        printf("%d\n", i);  
        i++;  
    } while (i <= n);  

    return 0;  
}