#include<stdio.h>
void main()
{
    int i,n,f;
    printf("enter the number");
    scanf("%d",&n);
    if(n<0)
        printf("no fractorial");
    else
    {
        f=1;
        for(i=1;i<=n;i++)
            f=f*i;
    }
    printf("%d",f);
}
