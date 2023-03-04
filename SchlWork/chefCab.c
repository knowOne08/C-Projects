#include <stdio.h>

int main(void) {
    int x,y,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        if(x==y){
            printf("ANY");
        }else if(x>y){
            printf("SECOND");
            
        }else{
            printf("FIRST");
        }
        
    }
	// your code goes here
	return 0;
}

