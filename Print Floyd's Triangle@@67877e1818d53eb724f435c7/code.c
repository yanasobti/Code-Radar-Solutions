#include <stdio.h>

int main() {
    int n;
    int num=1;
    scanf("%d",&n);
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row;col++){
            printf("%c ",num);
            ++num;
        }
        printf("\n");
    }
    return 0;
}