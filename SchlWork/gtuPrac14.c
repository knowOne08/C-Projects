#include<stdio.h>
int main(){
    int ch;
    float a,b;
    printf("Enter the operation you want to perform: ");
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&ch);
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    switch(ch){
        case 1:
            printf("Summation = %f",a+b);
            break;
        case 2:
            printf("Difference = %f",a+b);
            break;
        case 3:
            printf("Product = %f",a+b);
            break;
        case 4:
            printf("Quotient = %f",a+b);
            break;
        default:
            printf("Wrong Choice, choose between 1 to 4");
            break;
    }
}