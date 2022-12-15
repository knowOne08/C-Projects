#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void getKey(void);
void textEncrypt(void);
void textDecrypt(void);
int main(){

    getKey();
    //textEncrypt();
    
    return 0;
}

void getKey(void){
    int keyValue[3],i=0,j,c;
    char key[3],text[100];

    printf("Enter The Key (only three letters): ");
    fgets(key,4,stdin);
    //printf("%s",key);

    for(j=0;j<=2;j++){
        key[j] = toupper(key[j]);    
    }
    printf("%s",key);
    while(i<=2){
        keyValue[i] = (int)key[i]- 64;
        printf(" %d",keyValue[i]);
        i++;
    }
    
    printf("\n[1]Encrypt\n");
    printf("[2]Decrypt\n");
    printf("Enter the choice: ");
    scanf("%d",&c);
    if(c == 1){
        //printf("Enter text to be encrypted: ");
        //scanf("%s",text);
        textEncrypt();
    }
    else if(c==2){
        textDecrypt();
    }
    else{
        printf("Invalid Input");
        exit(0);
    }
}

void textEncrypt(void){
    char text[100];
    int j,i=0,textValue[100],len1;
    
    printf("Enter the text to be encrypted: ");
    fgets(text,strlen(text),stdin);
    scanf("%s",text);
    /*if (fgets(text, sizeof(text), stdin) == NULL)
    {
        printf("Fail to read the input stream");
    }
    else
    {
        text[strlen(text) - 1] = '\0';
    }*/
    

    for(j=0;j<=len1;j++){
        text[j] = tolower(text[j]);
    } 
    printf("%s",text);
    
    while(text[i] != '\0' && (strlen(text) - 1) > i){
        textValue[i] = (int)text[i] - 96;
        printf(" %d",textValue[i]);
        i++;
    }
    exit(0);
    
}
void textDecrypt(){

}

