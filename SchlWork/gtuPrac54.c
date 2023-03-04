#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,*b;
    printf("Enter a value for a: ");
    scanf("%d",&a);
    b = &a;
    printf("Address of a is %d",b);
    return 0;
}