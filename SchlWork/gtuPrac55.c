#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b , *ptrA,temp;
    printf("Enter Values of a and b: ");
    scanf("%d %d",&a,&b);
    ptrA = &a;
    temp = b;
    b = *ptrA;
    a = temp;  
    printf("%d %d",a,b);
    return 0;
}