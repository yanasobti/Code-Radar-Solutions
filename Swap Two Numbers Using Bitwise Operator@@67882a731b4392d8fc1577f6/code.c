#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    // c=a;
    // a=b;
    // b=c;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);
}