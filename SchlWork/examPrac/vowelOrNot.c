#include<stdio.h>
#include<stdlib.h>

int main(){
    int ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    ch = tolower(ch);
    if(ch >= 'a' && ch <= 'z'){
        if(ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' ||ch == 'u')
            printf("Vowel");
        else
            printf("Consonant");
    }
    
    return 0;
}