#include <stdio.h>
int main() {
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    if(ch=='+'){
        printf("%d",a+b);
    }else if(ch=='-'){
        printf("%d",a-b);
    }else if(ch=='*'){
        printf("%d",a*b);
    }else if(ch=='/'){
        printf("%d",a/b);
    }else if(b==0){
        printf("error");
    }
    return 0;
}