#include<stdio.h>
void SortArray(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]==arr[j+1]){
                int temp=arr[j];
                arr[j]>arr[j+1];
                arr[j+1]=temp;
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

    int first_element=arr[0],second_element=-1;
    for(int i=1;i<n;i++){
        if(arr[i]!=first_element){
            second_element=arr[i];
            break;
        }
    }

    if(second_element==-1){
        printf("-1");
    }else{
        printf("%d",second_element);
    }
    
}