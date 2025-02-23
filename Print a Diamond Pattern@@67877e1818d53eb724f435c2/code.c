#include <stdio.h>

int main() {
    int n, space, row, col;
    scanf("%d", &n);

    // Upper half of the diamond
    for (row = 1; row <= n; row++) {
        for (space = 1; space <= n - row; space++) {
            printf(" ");
        }
        for (col = 1; col <= (2 * row - 1); col++) {
            printf("*");
        }
        printf("\n");  
    }

    // Lower half of the diamond
    for (row = n - 1; row >= 1; row--) {

        for (space = 1; space <= n - row; space++) {
            printf(" ");
        }
        for (col = 1; col <= (2 * row - 1); col++) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}
