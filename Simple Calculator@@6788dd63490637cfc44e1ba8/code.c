#include <stdio.h>
int main() {
    float a,b;
    char ch;
    scanf("%f %f",&a,&b);
    scanf(" %c",&ch);
    if(ch=='+'){
        printf("%d",a+b);
    }else if(ch=='-'){
        printf("%d",a-b);
    }else if(ch=='*'){
        printf("%d",a*b);
    }else if(ch=='/'){
        printf("%d",a/b);
    }
    return 0;
}