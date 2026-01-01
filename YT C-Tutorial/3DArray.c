#include <stdio.h>
int main() {

    int arr[3][2][3];
    int i, j, k;
    
    printf("\n Enter Element OF Array :");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("\n Printing Array :\n ");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d ", arr[i][j][k]);
            }
        printf("\n");
        }
        printf("\n");
    }
    return 0;
}