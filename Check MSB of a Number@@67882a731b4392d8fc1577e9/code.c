#include <stdio.h>

int main() {
    int a,msb=1;
    scanf("%d",&a);

    while(a>1){
        a>>=1;
        msb<<=a;    //keeps track of mcb
    }if(msb==1){
        printf("Set");
    }else if(msb==0){
        printf("Not Set");
    }else{
        printf("Not Set");
    }
    return 0;
}