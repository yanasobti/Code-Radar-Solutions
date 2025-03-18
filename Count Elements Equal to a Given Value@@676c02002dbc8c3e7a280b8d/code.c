#include<stdio.h>
int fun(int n,int a,int arr[]){
    for (int i = 0; i < n; i++) {
        int count = 1; 
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == a) {
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n,a;
    scanf("%d %d",&n,&a);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",fun(n,a,arr));
}