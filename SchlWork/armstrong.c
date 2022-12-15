#include<stdio.h>
#include<stdlib.h>

int main(){
    int num, num1 ,sum = 0,a;
    printf("Enter a NUmber: ");
    scanf("%d",&num);
    num1 = num;
    while(num > 0){
        a  = num%10;
        sum += (a*a*a);
        num = (num - a)/10;
    }
    if(sum == num1)
        printf("Armstrong !!");
    else
        printf("Not Armstrong");
    return 0;
}