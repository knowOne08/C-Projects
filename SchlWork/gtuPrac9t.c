#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    printf("Enter Your Marks: ");
    scanf("%f",&a);
    (a<=100)?((a>=33)?printf("Pass"):printf("Fail")):printf("Invalid Input");
    return 0;
}