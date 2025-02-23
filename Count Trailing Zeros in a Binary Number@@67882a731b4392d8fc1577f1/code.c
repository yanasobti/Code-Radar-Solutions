#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;
    scanf("%u", &num);
    while ((num & 1) == 0) {  
        num >>= 1;            
        count++;             
    }
    printf("%d", count);
    
    return 0;
}
