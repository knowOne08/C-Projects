#include <stdio.h>
#include <stdlib.h>

int main(){
   int a,b,c;
    printf("Enter three Numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    (a>b)?((a>c)?printf("a is Greatest"):printf("c is Greatst")):(b>c)?printf("b is Greatest"):printf("c is Greateest");
    return 0;
}