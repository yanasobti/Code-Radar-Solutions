#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(a==('a','e','i','o','u','A','E','I','O','U')){
        printf("Vowel");    
    }else if((a>='A' && a>='Z') || (a>='a', a<='z')){
        printf("Consonant");
    }else if(a>='0'&& a<='9'){
        printf("Digit");
    }else if(){
        printf("Consonant");
    }else{
        printf("Special Character");
    }
    return 0;
}