#include <stdio.h>

int main() {
    int a;
    int msb_mask = 1 << (sizeof(a) * 8 - 1);
    scanf("%d", &a);
    if((msb_mask & a)!=0){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}
