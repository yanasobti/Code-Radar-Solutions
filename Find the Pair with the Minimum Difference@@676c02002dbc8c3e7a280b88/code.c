#include<stdio.h>
void SortArray(int n,int arr[]){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp; 
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    SortArray(n,arr);
    int min=arr[1]-arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff=arr[j]-arr[i];
            if(diff<min){
                min=diff;
            }
        }
    }
    printf("%d %d",arr[i],arr[j]);

    return 0
}