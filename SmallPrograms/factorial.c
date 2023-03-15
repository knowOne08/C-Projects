#include<stdio.h>
#include<stdlib.h>

int fact (int)
int main(){
 int i,ans; 
 printf("enter a number: ");
 scanf("%d",&i);
 ans = fact(i);
 printf("Answer is %d",ans);
} 

int fact(int i){
   if(i == 1)
      return 1;
   else
      return i*fact(i-1);
}