#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>=0 && b>=0){
        printf("False");
    }else if(a<=0 && b<=0){
        printf("False");
    }else{
        printf("True");
    }
    return 0;
}