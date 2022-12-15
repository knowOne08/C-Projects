#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    printf("Enter a number: ");
    scanf("%f",&a);
    (a>0)?printf("Positive"):(a<0)?printf("negative"):printf("zero");
    return 0;
}