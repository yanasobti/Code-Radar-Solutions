#include <stdio.h>
int main() {
    float a,b;
    char ch;
    scanf("%f %f",&a,&b);
    scanf(" %c",&ch);
    if(ch=='+'){
        printf("%.6f",a+b);
    }else if(ch=='-'){
        printf("%f",a-b);
    }else if(ch=='*'){
        printf("%f",a*b);
    }else if(ch=='/'){
        printf("%f",a/b);
    }
    return 0;
}