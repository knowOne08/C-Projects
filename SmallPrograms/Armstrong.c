#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=0,  b=1, c,i,amt;
    printf("Enter the number: ");
    scanf("%d",&amt);
    printf("%d %d ",a,b);
    for(i=0;i<amt; i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    printf("");
    return 0;
}