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
    int num1 = arr[0], num2 = arr[1];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff=arr[j]-arr[i];
            if(diff<min){
                min=diff;
                num1=arr[i];
                num2=arr[j];
            }else{
                printf("-1")
            }
        }
    }
    printf("%d %d",num1,num2);

    return 0;
}