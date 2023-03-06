#include<stdio.h>

int main(){
    int num,temp,sum=0,lastdgt;
    
    printf("Enter a  number: ");
    scanf("%d",&num);
    temp = num;
    while(num>=1){
        lastdgt = num % 10;
        sum += lastdgt*lastdgt*lastdgt;
        num = num/10;
    }
    if(sum == temp)
        printf("Armstrong");
    else    
        printf("Not Armstrong");
}