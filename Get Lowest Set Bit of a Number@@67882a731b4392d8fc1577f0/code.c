#include<stdio.h>
int getlsb(int num){
    return num%2;
}

int main(){
    int a;
    scanf("%d",&a);

    printf("%d",getlsb(num));
}