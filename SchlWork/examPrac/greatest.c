#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=5,b=6,c=2;
    if(a>b && a>c){
        printf("a is greatest");
    } else if (b>c){
        printf("b is greatest ");

    } else {
        printf("c is greatest");
    }
    return 0;
}