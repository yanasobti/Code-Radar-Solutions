#include <stdio.h>

int main() {
    int num, position = 1;
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
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
