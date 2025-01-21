#include <stdio.h>

int main() {
    char name[1000];
    int age;
    char hobby[1000];
    scanf("%s",name);
    scanf("%d",age);
    scanf("%s",hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
    return 0;
}