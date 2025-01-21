#include <stdio.h>

int fun();
int main() {
    fun();
    return 0;
}
int fun(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>=b){
        printf("True");
    }else{
        printf("False");
    }
}