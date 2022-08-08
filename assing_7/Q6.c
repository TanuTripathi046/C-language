#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         int sum=i*i;
         printf("%d ",sum);
    }
    return 0;
}