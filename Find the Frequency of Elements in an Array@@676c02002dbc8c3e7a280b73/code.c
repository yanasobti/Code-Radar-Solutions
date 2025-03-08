#include<stdio.h>

int Freq(int n,int arr[],int num){
    int count=0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        int visited[n]; 
    for (int i = 0; i < n; i++) {
        if (visited[i]) 
            continue;
        int count = Freq(n, arr, arr[i]);
        printf("%d %d\n", arr[i], count);
        visited[i] = 1;
    }
    return 0;
}