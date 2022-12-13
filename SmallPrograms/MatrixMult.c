#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[3][3], b[3][3], C[3][3],k,sum,i,j;

    printf("Enter Values for a: ");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nEnter Values for b: ");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum =0;
            for(k=0;k<3;k++){
                sum += (a[i][k]*b[k][j]);
            }
            C[i][j] = sum;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}