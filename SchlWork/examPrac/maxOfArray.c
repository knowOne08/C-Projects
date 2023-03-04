#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[5]={1,4,6,339,77},i,max;

    max = a[0];
    for(i=0;i<5;i++){
        if(a[i]>max)
            max = a[i];
    }
    // scanf("");
    printf("%d",max);
    return 0;
}