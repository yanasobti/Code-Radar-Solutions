#include<stdio.h>
int IsPalindrome(int num) {
    int original = num, rev = 0;
    
    while (num > 0) {
        rev = rev * 10 + (num % 10);  
        num /= 10;
    }
    
    return (original == rev);  
}

int NumOfPalindrome(int n, int arr[]) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (IsPalindrome(arr[i])) {
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
    printf("%d",NumOfPalindrome(n,arr));
}