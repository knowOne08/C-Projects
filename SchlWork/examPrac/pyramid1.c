include<stdio.h>
#include<stdlib.h>
int main()
{
    int rows;
    int column;
    int spaces;
    printf("Enter the number of rows : ");
    scanf(" %d",&rows);
    //diamond pattern
    printf("****--diamond pattern---****\n");
    for(int i=0; i<rows; i++)
    {
        for(int l=0;l<rows-1-i;l++)
        {
            printf(" ");
        }
        for(int j=0; j<=i;j++)
        {
            printf("%c ",'*');
        }
        printf("\n");
    }
    for(int i=0; i<rows; i++)
    {
        for(int spaces=0;spaces<i;spaces++)
        {
            printf(" ");
        }
        for(int j=0;j<rows-i;j++)
        {
            printf("%c ",'*');
        }
        printf("\n");
    }
 
    printf("\n");
    return 0;
}
