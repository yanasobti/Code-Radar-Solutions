#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int num, isPrime = 1;
        scanf("%d", &num);

        if (num < 2) {
            printf("0\n");  
            continue;
        }

        for (int i = 2; i * i <= num; i++) {  
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        printf("%d\n", isPrime);  
    }

    return 0;
}

