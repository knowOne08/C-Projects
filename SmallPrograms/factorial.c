#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,i,fact=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        fact= fact*i;
    }
    printf("Factorial is %d",fact);
    return 0;
}