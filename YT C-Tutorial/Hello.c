#include <stdio.h>

void namaste();
void english();

int main() {

    printf("BHAVIIK");
    namaste();

    return 0;
}

void namaste() {
    english();
    printf("Hello, Form Namaste");
}

void english() {
    namaste();
    printf("Hello, From English");
}
