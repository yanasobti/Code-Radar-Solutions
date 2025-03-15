#include<stdio.h>
int IsMonotonic(int n, int arr[]){
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            decreasing = 0;  // Not decreasing
        } else if (arr[i] < arr[i - 1]) {
            increasing = 0;  // Not increasing
        }
    }
    return (increasing || decreasing); 
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if(IsMonotonic(n,arr)){
        printf("YES");
    }else{
        printf("NO");
    }
}