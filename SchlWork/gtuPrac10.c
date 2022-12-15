#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,c;
    printf("Enter three Numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        
        if(a>c)
            printf("a is Greatest");
        else
            printf("c is Greatest");
        }
    else if(b>c)
        printf("b is Greatest");
    else
        printf("c is Greatest");
    return 0;
}