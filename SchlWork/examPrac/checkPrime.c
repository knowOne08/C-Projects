#include<stdio.h>
#include<math.h>
int main(){
    int p;
    printf("Enter a number: ");
    scanf("%d", &p);

    if(p<=1){
        return 0;
    }

    checkPrime(p);
    return 0;
}

void checkPrime(int p){
    int i;
    for(i=2;i<sqrt(p);i++){
        if(p%i == 0){
            printf("Not Prime");
            break;
        }
        else{
            printf("Prime");
            break;
        }
    }
   
}