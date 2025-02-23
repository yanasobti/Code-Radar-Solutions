#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;
    int total_bits = sizeof(num) * 8;  // Total bits (32 bits for unsigned int)
    scanf("%u", &num);

    for (int i = total_bits - 1; i >= 0; i--) {
        if (num & (1U << i)) { 
            break;            
        }
        count++;          
    }

    printf("%d", count);
    return 0;
}
