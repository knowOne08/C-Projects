// to sort an array using bubble sort algorithm using pointer variables.
// Created: 2013.10.15
// Last modified: 2013.10.15

#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[10],i,j,temp;
    int *p;
    p = arr;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(*(p+i) < *(p+j)){
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<10;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}

