#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row;col++){
            printf("%c ",64+col);
        }
        printf("\n");
    }
    return 0;
}