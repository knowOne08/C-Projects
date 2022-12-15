#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    printf("Enter a number: ");
    scanf("%f",&a);
    if(a<0)
        printf("Negative");
    else  if(a>0)
        printf("Positive");
    else
        printf("zero");
    return 0;
}