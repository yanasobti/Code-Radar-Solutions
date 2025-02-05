#include <stdio.h>

int main() {
    int a,msb=1;
    scanf("%d",&a);

    while(a>1){
        a>>=1;
        msb<<=a;    //keeps track of mcb
    }if(msb & a){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}