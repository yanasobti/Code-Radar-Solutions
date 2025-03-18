#include<stdio.h>
int SumOfPair(int n,int a,int arr[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==a){
                printf("%d %d\n",arr[i],arr[j]);
                return;
            }
        } 
    }
}

int main(){
    int n,a;
    scanf("%d %d",&n,&a);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    SumOfPair(n, a, arr);
    return 0;
}