#include<stdio.h>
int main(){
    int a,num,b;
    scanf("%d %d",&a,&num);

    b=a&~(1<<num);
    printf("%d",b);
}