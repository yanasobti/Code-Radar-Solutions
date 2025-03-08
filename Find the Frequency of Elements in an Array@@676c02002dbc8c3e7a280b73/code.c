#include <stdio.h>

int Freq(int n, int arr[], int num) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n], visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) 
            continue;

        int count = Freq(n, arr, arr[i]);
        printf("%d %d\n", arr[i], count);

        for (int j = i; j < n; j++) {
            if (arr[j] == arr[i]) {
                visited[j] = 1;
            }
        }
    }

    return 0;
}
