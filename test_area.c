#include <stdio.h>
#include <string.h>
void main(){
/*
    char ch;
    int ch_int;
    
    printf("Enter Character");
    scanf("%c",&ch);

    ch_int = (int) 'ch';

    printf("\n The ancii is: %d", ch);
 

    char x[10];

    printf("enter: \n");

    gets(x);
    printf("%s",x);

    char key[3];
    printf("Enter KEY: ");
    
    
    gets(key);

    if(strlen(key)>3){
        printf("Key can only be 3 letters");
    }
    else if(strlen(key)<=3){
        
        if("%d", key[0]<65 || "%d", key[0]>90){

            printf("Only capital");
            

       }


    }

    printf("%s", key);

    

    char x[] = "ABC";
    int i,y[3];
    int len = strlen(x);

    for(i=0;i<len;i++){

        y[i] = (int) x[i] - 64; 
        printf(" %d", y[i]);
    }

    printf("\n %d",y[2]);
*/
    char x[3]; 
    int y[3],i;
    printf("Enter: ");
    gets(x);


    for(i=0;i<=2;i++){
        y[i] = (int)x[i] - 64;
        printf(" %d",y[i]);
    }


}

