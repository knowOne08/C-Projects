#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Cipher(char* text,int key);

int main(){
    char text[100];
    int key = 1,len,i;
    printf("Enter the text to be encrypted: ");
    fgets(text,len,stdin);
    len = strlen(text);
    for(i=0;i<=len;i++){
        text[i] = tolower(text[i]);
    }
 
    

    printf("The Encrypted text is: ");

    Cipher(text,key);
    

}

void Cipher(char* text,int key){

    int i=0,j,len;
    char cipher;
    int cipherValue;

    while(text[i] != '\0' && strlen(text) - 1 > i){
        cipherValue = ((int)text[i]- 97 + key)%26 + 97;
        if(cipherValue == 85){
            cipher = (char)32;
        }else{
            cipher = (char)cipherValue;
        }
        printf("%c", cipher);
        i++;
    }

    printf("\n");
}
