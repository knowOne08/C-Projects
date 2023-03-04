#include<stdio.h>

int main(){
    FILE *fp;
    int l=0,t=0,w=0,c=0;
    char ch;
    fp = fopen("test.txt","r");

    if(fp == NULL){
        printf("Cant open file");
        exit(1);
    }
    ch  = getc(fp);

    while(ch!= EOF){
        if(ch == '\n'){
            l++;
        }
        else if(ch == '\t'){
            t++;
        }
        else if(ch == ' '){
            w++;
        }
        else{
            c++;
        }
        c=getc(fp); 
    }
    fclose(fp);
    printf("lines=%d, Tabs=%d, Words=%d, Characters=%d",l,t,w,c);
    return 0;
}