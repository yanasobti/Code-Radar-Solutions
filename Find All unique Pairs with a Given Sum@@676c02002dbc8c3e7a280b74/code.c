#include <stdio.h>

void SumOfPair(int n, int a, int arr[]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  
            if (arr[i] + arr[j] == a) {
                printf("%d %d\n", arr[i], arr[j]);
                while(arr[j]==arr[j+1]){
                    j++;
                }
            }
        }
        while(arr[i]==arr[i+1]){
            i++;
        }
    }
}

int main() {
    int n,a;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d",&a);

    SumOfPair(n, a, arr);
    
    return 0;
}