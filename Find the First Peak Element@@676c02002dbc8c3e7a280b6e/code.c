#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 1) return 1;

    int prev, curr, next;
    int peak = -1, foundPeak = 0; 

    scanf("%d", &prev);

    if (n == 1) { 
        printf("%d\n", prev);
        return 0;
    }

    scanf("%d", &curr);

    if (prev > curr) { // Check if the first element is a peak
        peak = prev;
        foundPeak = 1;
    }

    for (int i = 2; i < n; i++) {
        scanf("%d", &next);

        if (curr > prev && curr > next) { // Check for peak
            if (foundPeak) { // If a peak was already found, return -1
                printf("-1\n");
                return 0;
            }
            peak = curr;
            foundPeak = 1;
        }

        prev = curr;
        curr = next;
    }

    // Check if the last element is a peak
    if (curr > prev) {
        if (foundPeak) {
            printf("-1\n");
            return 0;
        }
        peak = curr;
    }

    printf("%d\n", peak);
    return 0;
}