#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}

int isPrime(int num){
    if(num<2){
        printf("0");
        return 0;

    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            printf("0");
            return 0;
        }
    }
    printf("1");
    }
}