#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%c %d %d",&c,&a,&b);
    if(c=='+'){
        printf("%d",a+b);
    }else if(c=='-'){
        printf("%d",a-b);
    }else if(c=='*'){
        printf("%d",a*b);
    }else{
        printf("%d",a/b);
    }
    
    return 0;
}