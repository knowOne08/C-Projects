#include<stdio.h>
#include<stdlib.h>

int main(){
    float a;
    printf("Enter Your Marks: ");
    scanf("%f",&a);
    if(a<=100){
        
        if(a>=33)
            printf("Pass");
        else
            printf("Fail");
        }
    else
        printf("Invalid Input");
    return 0;
}