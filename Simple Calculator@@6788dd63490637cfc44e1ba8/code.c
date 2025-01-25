#include <stdio.h>
int main() {
    float a,b;
    char ch;
    scanf("%f %f",&a,&b);
    scanf(" %c",&ch);
    switch(ch){
        case '+':
        printf("%f",a+b);
        break;
        case '-':
        printf("%f",a-b);
        break;
        case '*':
        printf("%f",a*b);
        break;
        case '/':
        printf("%f",a/b);
    }
    return 0;
}