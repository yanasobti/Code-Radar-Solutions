#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case '+':
        printf("%d",a+b);

        case '-':
        printf("%d",a-b);

        case '*':
        printf("%d",a*b);

        case '/':
        printf("%d",a/b);
    }
    
    return 0;
}