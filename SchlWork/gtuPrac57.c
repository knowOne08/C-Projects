#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[20],i,n,*ptr;
    printf("Enter no of Values for arrays: ");
    scanf("%d",&n);
    printf("Enter Values for arrays: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ptr = arr[n/2];
    
    printf("Middle of array is: %d",*ptr);
    return 0;
}