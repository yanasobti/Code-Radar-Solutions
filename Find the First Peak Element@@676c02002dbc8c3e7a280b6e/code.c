#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 1) return 1; 

    int prev, curr, next;
    int peak = -1;
    
    scanf("%d", &prev);
    
    if (n == 1) { 
        printf("%d\n", prev);
        return 0;
    }
    scanf("%d", &curr);
    if (prev > curr) {
        peak = prev;
    }
    for (int i = 2; i < n; i++) {
        scanf("%d", &next);

        if (curr > prev && curr > next) { 
            if (peak != -1) { 
                printf("-1\n");
                return 0;
            }
            peak = curr;
        }

        prev = curr;
        curr = next;
    }

    if (curr > prev) {
        if (peak != -1) { 
            printf("-1\n");
            return 0;
        }
        peak = curr;
    }

    printf("%d\n", peak);
    return 0;
}


