#include <stdio.h>

int main() {
    scanf("%d",&n);
    for(int row=1; row<=n; row++){
        for(int col=1;col<=row;col++){
            printf("%d ",col);
        }printf("\n");
    }
    return 0;
}