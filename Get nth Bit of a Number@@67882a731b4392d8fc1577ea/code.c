#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d %d",&a,&b);
    n=(a>>b)&1;
    printf("%d",n);
}