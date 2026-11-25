#include<stdio.h>
void main()
{
    int A[2][2],B[2][2];C[2][2],i,j;
    printf("enter the values of A matrix");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&A[i][j]);
    printf("enter the values of B matrix");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&B[i][j]);
        for(i=0;i<2;i++)
            for(j=0;j<2;j++)
            C[i][j]=A[i][j]+B[i][j];
        printf("Addition=\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
        printf("%d\t",C[i][j]);
        printf("\n");

        }

}
