#include<stdio.h>
int CheckPrime(int n,int arr[]){
        int count = 0;

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        if (num < 2) continue;

        int isPrime = 1; 
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) count++; 
    }

    return count;

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i])
    }
    printf("%d",CheckPrime(n,arr))
}