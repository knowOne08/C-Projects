#include<stdio.h>
#include<string.h>

int main(){
    char s1[]="there", s2[]="their";
    printf("%d ", strcmp(s1, s2));
    // printf("%s ", strcpy(s1, s2));
    printf("%s ", strrchr(s1, 'h'));
    return 0;
}