#include<stdio.h>
int MaxFreq(int n,int arr[]){
    int maxFreq = 0, maxElem = arr[0];
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            maxElem = arr[i];
        }
    }
    return maxElem;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("%d",MaxFreq(n,arr));
}