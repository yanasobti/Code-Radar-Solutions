#include<stdio.h>

int main(){
    int decimal;
    scanf("%d",&decimal);
    int leading_zero=1
    for (int i = 31; i >= 0; i--) {
        int bit = (decimal >> i) & 1;  // Extract bit using bitwise AND
        if(bit){
            leading_zero=1;
        }if(!leading_zero){
            printf("%d",bit);
        }
    if(leading_zero){
        printf("0");
    }
    }
}