#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    switch(c){
        case '+':
        printf("%f",a+b);

        case '-':
        printf("%f",a-b);

        case '*':
        printf("%f",a*b);

        case '/':
        printf("%f",a/b);
    }
    
    return 0;
}