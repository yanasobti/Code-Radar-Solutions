#include <stdio.h>

int main() {
    int a, msb = 1;
    scanf("%d", &a);

    while (msb <= a) {
        msb <<= 1;
    }
    msb >>= 1; // Get back to the last valid MSB

    if (a & msb) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}
