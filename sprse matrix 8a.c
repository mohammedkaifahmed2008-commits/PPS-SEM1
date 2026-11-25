#include<stdio.h>
void main()
{
    int m[3][3],i,j,z=0,nz=0;
    printf("enter 5x5 matrix element");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
            if(m[i][j]==0)
                z++;
            else
                nz++;
        }
    }
    printf("\n matrix is=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d",m[i][j]);
        printf("\n");
    }
    printf("no.of zero=%d",z);
    printf("\n no.of non zero elements=%d",nz);
    if(z>nz)
        printf("\nmatrix is sparse");
        else
            printf("\ngiven matrix is not sparse");

        printf("\n sparse representation is\n");
}
