#include <stdio.h>
int main() {

    int age = 18;
    int *ptr = &age;
    int _age = *ptr;

    printf("%p\n", &age);
    printf("Helllo...\n");
    printf("%p\n", ptr);

    if ( ptr == &age ) {
        printf("Yes, it's same.\n");        
    }

    printf("%p\n", *ptr);
    printf("%d\n", *ptr);


    return 0;
}

/*
0061FF14
Helllo..........
0061FF14
Yes, it's same.
00000012
18
*/