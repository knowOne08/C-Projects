#include<stdio.h>
#include<stdlib.h>

int main(){
    int ch;
    float far,cel;
    printf("1. Fahrenheit to Celsius");
    printf("2. Celsius to Fahrenheit");
    printf("Enter your choice: ");  
    scanf("%d",&ch);
    switch(ch){
        case 1:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f",&far);
            
            printf("Temperature in Celsius: %f",(far-32)*5/9);
            break;
        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f",&cel);
            printf("Temperature in Fahrenheit: %f",(cel*9/5)+32);
            break;
        default:
            printf("Invalid choice");
    }
}