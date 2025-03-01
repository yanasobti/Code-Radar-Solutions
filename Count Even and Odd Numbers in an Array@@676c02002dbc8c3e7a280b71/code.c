#include <stdio.h>

void countEvenOdd(int arr[], int n, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            (*evenCount)++;  
        else
            (*oddCount)++;
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);  
    }

    int evenCount, oddCount;
    countEvenOdd(arr, n, &evenCount, &oddCount);  
    printf("%d %d", evenCount,oddCount);
    return 0;
}
