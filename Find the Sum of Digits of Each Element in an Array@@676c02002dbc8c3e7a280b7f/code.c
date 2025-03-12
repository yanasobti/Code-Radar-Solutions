#include<stdio.h>
#include<stdlib.h>

int SumOfDigits(int n,int arr[]){
    for(int i=0;i<n;i++){
        int num=abs(arr[i]);
        int sum = 0;
        while (num > 0) {
            sum += num % 10;  
            num /= 10;        
        }

        printf("%d ",sum);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    SumOfDigits(n,arr);

    return 0;
}