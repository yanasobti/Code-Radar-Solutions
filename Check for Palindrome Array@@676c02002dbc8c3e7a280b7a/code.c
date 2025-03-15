#include<stdio.h>
int Palindrome(int n,int arr[]){
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if (Palindrome(n, arr)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}