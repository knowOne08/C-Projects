#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,ans;
    int fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
    ans = facto(n);
    
    printf("Factorial is %d",ans);
}

int facto(int a){
    if(a == 1)
        return 1;
    else
        return a*facto(a-1);
}