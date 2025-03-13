#include<stdio.h>
#include<stdlib.h>
int MaxProd(int n,int arr[]){
    int num;
    for(int i=0;i<n;i++){
        int num=abs(arr[i]);
        prod=arr[n-1] * arr[n-2];
    }
    printf("%d",prod);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    MaxProd(n,arr);

    return 0;
}