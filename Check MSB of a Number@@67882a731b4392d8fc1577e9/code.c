#include <stdio.h>

int main() {
    int a,msb=1;
    scanf("%d",&a);
    while(n>1){
        n>>=1;
        msb<<=n;    //keeps track of mcb
    }if(msb==1){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}