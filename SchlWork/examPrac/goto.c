#include<stdio.h>


int main(){
    int n=10;

    loop:
    printf("%d ", n);
        n--;
    if(n>0){
        goto loop;
    }
}