#include<stdio.h>
#include<stdlib.h>

int main(){

    float a,b,ans;
    int c;
    printf("Enter the index of operation you want to perform:\n1.Add\n2.Sub\n3.Div\n4.Mult\n: ");
    scanf("%d",&c);
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    switch(c){
        case 1:
            ans = add(a,b);
            break;
        case 2:
            ans = sub(a,b);
            break;
        case 3:
            ans = div(a,b);
            break;
        case 4:
            ans = mult(a,b); 
            break;
        default:
            printf("Invalid Choice")
    }
    
    printf("Answer is %f",ans);
    return 0;
}

float add(float a, float b){
    return a+b;
}
float mult(float a, float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
}
float sub(float a, float b){
    return a-b;
}