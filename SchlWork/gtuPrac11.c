#include<stdio.h>
#include<stdlib.h>

int main(){
    char c;
    int a;
    printf("enter a character: ");
    scanf("%c",&c);
    a = (int)c;
    if(a>47 && a<=57)
        printf("Digit Entered");
    else if(a>=58 && a<=64)
        printf("Special Character Entered");
    else if(a>=65 && a<=90)
        printf("Capital letter Entered");
    else if(a>=97 && a<=122)
        printf("Small letter Entered");
    else
        printf("Invalid input");
    return 0;
}