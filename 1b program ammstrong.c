#include<stdio.h>
void main()
{
    int n,i,rem,arm,temp;
    arm=0;
    printf("enter no");
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        rem=n%10;
        arm=arm+rem*rem*rem;
        n=n/10;

    }
 if(arm=temp)
printf("give number is amstrong");
else
    printf("given number is not armstrong");
}
