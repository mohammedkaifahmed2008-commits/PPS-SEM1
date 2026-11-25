#include<stdio.h>
#include<math.h>
void main()
{
    char hexa[50];
    int i,size,deci=0,octa=0;
    int rem;
    printf("enter a hexadecimal number:");
    scanf("%s",hexa);
    size=0;
    while(hexa[size]!='\0')
        size++;
    for(i=0;i<size;i++)
    {
        if(hexa[i]>='0'&&hexa[i]<='9')
            deci=deci+(hexa[i]-'0')*pow(16,size-i-1);
        else if(hexa[i]>='A'&&hexa[i]<='F')
            deci=deci+(hexa[i]-'A'+10)*pow(16,size-i-1);
        else if(hexa[i]>='a'&&hexa[i]<='f')
            deci=deci+(hexa[i]-'a'+10)*pow(16,size-i-1);
    }
    i=1;
    while(deci!=0)
    {
        rem=deci%8;
        octa=octa+rem*i;
        deci=deci/8;
        i=i*10;
    }
    printf("equivalent octal value=%d",octa);
}
