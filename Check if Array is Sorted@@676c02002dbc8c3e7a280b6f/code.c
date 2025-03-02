#include<stdio.h>

void checksort(int n, int arr[]){
    int sorted = 1; 
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0;  
            break;
        }
    }
    if(sorted){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d\n",&arr[i]);
    }
    checksort(n, arr);

    return 0;
}