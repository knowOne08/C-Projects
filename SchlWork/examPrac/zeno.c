#include<stdio.h>

int main(){
    int i=0;
    float sum=4;
    while(1){
        if(sum==8){
            printf("%d steps", i);
            return 0;
        }else{
            sum = sum + (sum*0.5);
            i++;
            printf("%d step ",i);
            // if(i>50){
            //     printf("Stopped at %dth step",i);
            //     return 0;
            // }
        }
    }
}