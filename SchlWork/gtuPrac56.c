#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[10];
    int *ptr,i;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!= NULL; i++){
        ptr = &str[i];
        printf("Address of the character %c is:  %d\n",str[i],ptr);
    }
   
    return 0;
}