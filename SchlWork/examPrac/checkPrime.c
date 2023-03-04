#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf

int main(){
    int p;
    pf("Enter a number: ");
    sf("%d", &p);

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
            pf("Not Prime");
            break;
        }
        else{
            pf("Prime");
            break;
        }
    }
   
}