#include<stdio.h>
void Maxelement(int n,int arr[]){
    int maxfreq=0,maxelement=arr[0];
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxfreq){
        maxfreq=count;
        maxelement=arr[i];

        printf("%d",maxelement);
        }
    }

    return maxelement;

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",Maxelement(n,arr));

    return 0;
}