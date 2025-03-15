#include<stdio.h>
int fun(int n,int arr[]){
    int max=-1;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0 && arr[i]>max || max==-1){
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
    int result = fun(n, arr);
    if (result == -1) {
        printf("-1");
    } else {
        printf("%d", result);
    }

}