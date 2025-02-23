#include <stdio.h>

int main() {
    int num, position = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("No set bits found (number is 0).\n");
    } else {
        // Loop until the rightmost bit is set
        while ((num & 1) == 0) {
            num >>= 1;    
            position++;   
        }
        printf("%d", position);
    }

    return 0;
}
