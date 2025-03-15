#include<stdio.h>
void CalSum(int n, int arr[]){
    for(int i=0;i<n;i++){
        arr[i] = arr[i] + arr[i - 1];
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    CalSum(n,arr);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}