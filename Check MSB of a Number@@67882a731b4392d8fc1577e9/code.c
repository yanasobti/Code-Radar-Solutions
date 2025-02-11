#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int msb_mask = 1 << (sizeof(num) * 8 - 1);

    if((msb_mask & a)!=0){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}
