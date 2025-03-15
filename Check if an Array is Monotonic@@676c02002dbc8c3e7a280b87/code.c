#include<stdio.h>
int IsMonotonic(int n, int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1] || arr[i]>arr[i-1]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if(IsMonotonic(n,arr)==1){
        printf("YES");
    }else{
        printf("NO");
    }
}