#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(a==('a','e','i','o','u')){
        printf("Vowel");
    }else if(a==(int)a){
        printf("Digit");
    }else if(!(a=='a','e','i','o','u')){
        printf("Consonant")
    }else{
        printf("Special Character");
    }
    return 0;
}