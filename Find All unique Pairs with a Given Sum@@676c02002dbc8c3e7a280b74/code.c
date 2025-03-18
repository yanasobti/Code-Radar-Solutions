#include <stdio.h>

void SumOfPair(int n, int a, int arr[]) {
    int found = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  
            if (arr[i] + arr[j] == a) {
                printf("%d %d\n", arr[i], arr[j]);
                found = 1;   
            }
        }
    }

    if (!found) {
        printf(" ");
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