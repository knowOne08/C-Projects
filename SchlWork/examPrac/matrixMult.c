#include<stdio.h>
#include<stdlib.h>

int main(){
    int p,q,r,i,j,k=0;
    int A[p][q],B[q][r], C[q][q], sum=0;
    
    printf("Enter the number of rows and colums of A and B respectively (colums of A is equal to rows of B): ");
    scanf("%d %d %d", &p,&q,&r);
    
    printf("ENter A: ");
    for(i=0;i<p;i++){
        for(j=0;j<=q;j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("ENter B: ");
    for(i=0;i<p;i++){
        for(j=0;j<=q;j++){
            scanf("%d", &B[i][j]);
        }
    }
    
    for(i=0;i<p;i++){
        C[i][j] = 0 ;
        for(j=0;j<q;j++){
            for(k=0;k<q;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
            
        }
        k++;
    }
    for(i=0;i<p;i++){
        for(j=0;j<=q;j++){
            scanf("%d", &C[i][j]);
        }
        printf("\n");
    }
    return 0;
}