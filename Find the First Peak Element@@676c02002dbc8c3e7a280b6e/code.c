#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 1){
        return 1;
    }

    int prev, curr, next;
    scanf("%d", &prev);

    if (n == 1) { 
        printf("%d\n", prev);
        return 0;
    }

    scanf("%d", &curr);

    if (prev >= curr) { 
        printf("%d\n", prev);
        return 0;
    }

    for (int i = 2; i < n; i++) {
        scanf("%d", &next);

        if (curr > prev && curr > next) {
            printf("%d\n", curr);
            return 0;
        }

        prev = curr;
        curr = next;
    }

     if(prev==curr){
        printf("-1");
    }

    printf("%d\n", curr);

    return 0;
}

