#include<stdio.h>
#include<stdlib.h>

int main(){

    int a;
    printf("Enter Your Marks: ");
    scanf("%d",&a);
    if(a<=100){
        if(a>80)
            printf("Distinction");
        else if(a>60)
            printf("First Class");
        else if(a>40)
            printf("Second Class");
        else
            printf("Fail");
    }
    else
        printf("Invalid input");
    
    return 0;
}