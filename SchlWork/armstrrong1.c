#include<stdio.h>
#include<stdlib.h>

int main(){
    int num, num1 ,sum = 0,a,num2;
    // printf("Enter a NUmber: ");
    // scanf("%d",&num);
    
    for(num=1; num<=100; num++){
        num1 = num;
        num2 = num;
        sum=0;
        // while(num1 > 0){
        //     a = num1%10;
        //     sum += (a*a*a);
        //     num1 = (num1 - a)/10;
        // }

        printf("%d ",num1);
        
        // if(sum == num1)
        //     printf("%d ", num1);
        // else
        //     printf("Not Armstrong");
    }    
    return 0;
}