#include<stdio.h>

int main(){
    int num,rev=0,rem=0,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp = num;
    while(num>=1){
        rem = num % 10;
        rev = (rev*10) + rem;
        num = num/10;
    }

    printf("%d\n",rev);

    if(temp == rev)
        printf("palindrome");
    else   
        printf("Not");
}