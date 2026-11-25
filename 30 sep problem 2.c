#include<stdio.h>
void main()
{
 int i,c,n,j;
 printf("enter the generate prime number");
 scanf("%d",&n);
 for (i=1;i<n;i++)
 {
 c=0;
 for (j=1;j<=i;j++)
        if (i%j==0)
        c++;
        printf("%d\t",i);
    }
}
