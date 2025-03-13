#include<stdio.h>
int ReapeatingEl(int n,int arr[]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                int repeated_el=arr[i];
                return repeated_el;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=ReapeatingEl(n,arr);
    if(result == -1){
        printf("-1");
    }else{
        printf("%d",result);
    }
}