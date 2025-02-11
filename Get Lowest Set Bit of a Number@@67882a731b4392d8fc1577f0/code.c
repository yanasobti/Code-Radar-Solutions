#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b= a & - (a-1);
    printf("%d",b);
}