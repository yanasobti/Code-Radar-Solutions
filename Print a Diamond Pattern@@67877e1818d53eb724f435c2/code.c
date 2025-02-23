#include<stdio.h>
int main(){
    int n,space;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
    }for(int col=1; col<=(2*row-1); col++){
        printf("*");
    }
    printf("\n");

        for (row = n - 1; row>= 1; row--) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (col = 1; col <= (2 * row - 1); col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}