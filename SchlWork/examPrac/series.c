#include<stdio.h>

int main(){
    float sum=0;
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        // printf("%d\n",fact(i));
        
        sum += (float)1/(float)fact(i);
        printf("%f\n",sum);
    }
    printf("Sum is %f",sum);
}

int fact(int i){
    if(i==0)
        return 1;
    else
        return (i*fact(i-1));
}
