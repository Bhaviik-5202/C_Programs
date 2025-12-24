// Print all ASCII characters with their values. //

#include <stdio.h>

int main() {
    printf("ASCII Characters:\n");
    for (int i = 0; i < 128; i++) {
        printf("ASCII value %d: %c\n", i, i);
    }
    
    return 0;
}