#include <stdio.h>
int main (){
    int n,r;
    float ans;

    printf("n and r: ");
    scanf("%d %d",&n, &r);
    ans = (float)fact(n)/((float)fact(r)*(float)fact(n-r));
    printf("ans is %f",ans);
}

int fact(int a){
    if(a==1)
        return 1;
    else 
            return a*fact(a-1);
}