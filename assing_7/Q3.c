#include<stdio.h>

int main()
{
    int n,i,a=0,b=1,c;
    //printf("Enter the numbers");
    //scanf("%d",&n);
    printf("%d ",a);
    printf("%d ",b);
    for(i=0;i<10;i++)
    {
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
    }
    return 0;
}