#include<stdio.h>
void main()
{
    int A[2][2],i,j;
    printf("enter the 4 values of matrix A");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&A[i][j]);
    printf("\n A matrix=\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d\t",A[i][j]);
        printf("\n");
    }
    printf("\n Transpose of A matrix=\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d\t",A[i][j]);
        printf("\n");
    }
}
