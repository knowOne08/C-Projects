#include <stdio.h>
#include <stdlib.h>

int main(){
    char arr[10]={'a','e','i','o','u','A','E','I','O','U'};
    char c;
    int i;
    printf("enter a character: ");
    scanf("%c",&c);
    for(i=0;arr!=NULL;i++){
        if(c == arr[i]){
            printf("Vowel");
            exit(0);
        }
        else
            printf("Consonant");
            exit(0);
    }
        
    
    return 0;
}