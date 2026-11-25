#include<stdio.h>
void main()
{
    int i,j,n;
    printf("number of rows");
    scanf("%d",&n);
    for (i=1;j<=i;j++)
        {
            for(j=1;j<i;j++)
                printf("*");
            printf("\n");
        }
}
