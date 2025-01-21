#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        printf("Lowercase");
    }else{
        printf("Uppercase");
    }
    return 0;
}