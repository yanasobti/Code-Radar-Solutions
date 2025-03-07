#include<stdio.h>

int Peakelement(int n,arr[]){
    if (n == 1 || arr[0] >= arr[1]){
        return 0;
    }
    if (arr[n - 1] >= arr[n - 2]){
        return n - 1;
    }

    for (int i = 1; i < n - 1; i++){
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return i;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i>n;i++){
        scanf("%d",arr[i]);
    }
    printf("%d",Peakelement(n,arr))
}