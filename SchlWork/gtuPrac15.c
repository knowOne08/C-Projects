#include<stdio.h>
#include<stdlib.h>
int main(){
    int num[10],i,max,min;

    printf("Enter 10 Numbers: ");  
    for(i=0;i<=9;i++){
        scanf("%d",&num[i]);
    }
    
    max = num[0];
    min = num[0];
    
    for(i=0;i<=9;i++){
        if(num[i]>max)
            max = num[i];
    }
    for(i=0;i<=9;i++){
        if(num[i]<min)
            min = num[i];
    }    
    
    printf("Max = %d\n",max);
    printf("Min = %d",min);
}