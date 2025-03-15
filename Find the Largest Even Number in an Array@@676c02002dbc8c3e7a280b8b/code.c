#include<stdio.h>
int fun(int n,int arr[]){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]%2==0 && arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",fun(n,arr));
}