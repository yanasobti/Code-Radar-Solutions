#include<stdio.h>
int fun(int n,int a,int arr[]){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>a){
            count++;
        }
    }
    return count;
}

int main(){
    int n,a;
    scanf("%d %d",&n,&a);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    printf("%d",fun(n,a,arr));
}