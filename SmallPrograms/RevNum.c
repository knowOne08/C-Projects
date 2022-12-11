#include<stdio.h>
#include<stdlib.h>

int main(){
    int num,rev=0,rem,i,num1,num2;
    int j=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    num1 = num;
    num2 = num;
    // printf("%d ",num1);
    while(num1>9){
        j++;
        num1 = num1/10;
    }
    
    // printf("%d ",j);
    for(i=1;i<=j;i++){
        rem = num%10;
        rev = (rev)*10+rem;
        num = (num-rem)/10;
    }
    
    if(rev!=num2)
        printf("rev is of number %d",rev);
    else
        printf("Number is palindrome");
    return 0;
}