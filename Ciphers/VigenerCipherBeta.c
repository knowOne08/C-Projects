#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
const char* get_key(void){
    char * key;

    
    printf("Enter KEY (Only Three Letters): ");
    
    
    gets(key);


    if (strlen(key) <= 3 && strlen(key) >= 0)
    {

        if ("%d", key[0] < 65 || "%d", key[0] > 90 ){
            
            printf("Only Capital Letters Are Allowed in Key");
            return 1;
        }
        if ("%d", key[1] < 65 || "%d", key[1] > 90 ){
            
            printf("Only Capital Letters Are Allowed in Key");
            return 1;

        }
        if ("%d", key[2] < 65 || "%d", key[2] > 90 ){
            
            printf("Only Capital Letters Are Allowed in Key");
            return 1;
        }
        else if(strlen(key) == 0){
            printf("Enter valid  key");
            return 1;

        }
        else{

            printf("%s", key);
            return key;
        }
    }
    else if(strlen(key)>3){
        
        printf("Key Can Only Be of Three Letters");
        
    } 
    

    
}

const char* get_text(void){
    
    char * text;

    printf("\nEnter The Text You Want to Encrypt: ");

    gets(text);

    return text;

}

/// @brief 
/// @param key 
/// @param text 
///*
void encrypt(const  char * key,const char * text){

    int x[3];
    int  i,j,count = 0;
    char * enc;
    int len = strlen(text);
    
    for(i=0;i<=2;i++){
        x[i] = (int) key[i] - 64;
        printf(" %d",x[i]);
    }

    for(j=0;j<= len;j++){
        if(count<=2){
        enc[j] = ((int) x[count]) + ((int) text[j]);
        count++;
        } 
        else{
            count=0;
        }

    printf("%s",enc);
    }
    
}
//*/

int main(void)
{

    char    *key, *text;
    
    key = get_key();
    //printf("\n%s",key);
    text = get_text();
    //printf("\n%s",text);
    
    if("%d", key == 0 || "%d", key == 1){
        return 0;
    }    
    else if("%d", text == 0 || "%d", text == 1){
        return 0;
    }
    else{
        encrypt(key,text);
        
    }     


    return 0;


}
