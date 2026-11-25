#include<stdio.h>
void main()
{
    int arr[100],n,i,key;
    int low,high,mid,found=0;
    printf("enter the size of n elements:");
    scanf("%d",&n);
    printf("enter %d values in sorted order :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
   printf("\n enter key value to find:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            found=1;
            printf("value found at%d possible \n",mid+1);
            break;
        }
        else if(key<arr[mid])
        {
            high = mid+1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(found==0)
        printf("value not found\n");
}
