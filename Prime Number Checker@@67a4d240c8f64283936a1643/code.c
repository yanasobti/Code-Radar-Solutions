#include <stdio.h>
int isPrime(int num);  
int main() {
    int t;
    scanf("%d", &t);

    int results[t];  

    for (int i = 0; i < t; i++) {
        int num;
        scanf("%d", &num);
        results[i] = isPrime(num);  
    }
    for (int i = 0; i < t; i++) {
        printf("%d\n", results[i]);
    }

    return 0;
}

int isPrime(int num) {
    if (num < 2) return 0;  

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  
    }

    return 1; 
}