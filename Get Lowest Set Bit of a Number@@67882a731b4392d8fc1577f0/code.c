#include<stdio.h>
int getlsb(int num){
    return num%2;
}

int main(){
    int num;
    scanf("%d",&num);

    printf("%d",getlsb(num));
}