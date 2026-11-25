#include<stdio.h>
void main()
{
    int arr[100],N,i,sum=0;
    printf("enter the size of N elements:");
    scanf("%d",&N);
    printf("enter%d values intoarray:\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum of array elements=%d",sum);
}
