#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,k=1;

    for(i=1;i<=3;i++){

        for(j=1;j<=i;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");

    }

    return 0;
}