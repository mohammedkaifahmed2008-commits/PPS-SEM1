#include<stdio.h>
void main()
{
    long long n,original,bin=0;
    long long rem,i=1;
    printf("enter a decimal number");
    scanf("%lld",&n);
    original=n;
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        i=i*10;
    }
    printf("%lld in deci=%lld in binary",original,bin);
}
