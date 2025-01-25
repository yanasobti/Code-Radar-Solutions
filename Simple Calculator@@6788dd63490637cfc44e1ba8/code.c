#include <stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch{
        case "+":
        printf("%d",a+b);
        break;
        case "-":
        printf("%d",a-b);
        break;
        case "*":
        printf("%d",a*b);
        break;
        case "/":
        printf("%d",a/b);
    }
    return 0;
    }
}