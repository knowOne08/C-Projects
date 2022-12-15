#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char *get_key(void){

    char * key;

    printf("Enter Key(ONLY CAPITAL LETTER): ");
    gets(key);
    if(strlen(key) == 3){
        if( (int)key[0] < 65 || (int)key[0] > 90 ){
            printf("Only Capital Letters Are Allowed in Key");
            exit(0);
        }
        else if( (int)key[1] < 65 || (int)key[1] > 90 ){
            printf("Only Capital Letters Are Allowed in Key");
            exit(0);
        }
        else if( (int)key[2] < 65 || (int)key[2] > 90 ){
            printf("Only Capital Letters Are Allowed in Key");
            exit(0);
        }
        else{
            //puts(key);
            //printf(" %d",&key);
            return key;
        }
    }
    else{
        printf("Invalid Key");
        exit(0);
    }
}

///*
char* get_text(void){
    
    char* text;
    printf("\nEnter Text You Want to Encrypt: ");
    gets(text);
    if(strlen(text)==0){
        printf("Invalid Input");
        exit(0);
    }
    else{
        return text;
    }
//    printf("%s",text);

}
//*/
void encrypt(char* key2,char* text2){

    int i,keyf[3];
//    puts(key2);
//    strcpy(keyf,(int)key);

//    printf(" %s", key);
//    printf(" %s", text);

    for(i=0;i<=2;i++){
        keyf[i] = (int)key2[i] - 64;
        printf(" %d",keyf[i]);
    }
    
}

int main(){


    char* key1,* text1;


    key1 = get_key();
//    puts(key1);
    text1 = get_text();


    //printf(" %d",&key);
    
    if(key1 != NULL || text1 != NULL){
        encrypt(key1,text1);
    }
    else{        
        printf("Wrong Input");
        exit(0);
    }

    return 0;
}


