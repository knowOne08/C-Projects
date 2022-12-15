#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    if(a%2==0)
        printf("Last Digit is even");
    else
        printf("Last Digit is odd");
    return 0;
}