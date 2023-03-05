#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,r;
    printf("Enter n and r: ");
    scanf("%d %d",&n,&r);
    printf("nCr = %d",fact(n)/(fact(r)*fact(n-r)));
    return 0;
    


}

    int fact(int a){
        (a==0)?
            return 1:
        return a*fact(a-1)
    }