#include <stdio.h>

void SumOfPair(int n, int a, int arr[]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  // j starts from i+1 to avoid duplicates
            if (arr[i] + arr[j] == a) {
                printf("%d %d\n", arr[i], arr[j]);
                return;  // Stop after finding the first valid pair
            }
        } 
    }
}

int main() {
    int n, a;
    scanf("%d %d", &n, &a);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    SumOfPair(n, a, arr);
    
    return 0;
}
