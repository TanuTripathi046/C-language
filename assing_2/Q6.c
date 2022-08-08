#include<stdio.h>

int main()
{
    int a,b,i;
    printf("enter number");
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++)
    {
        a++;
    }
    printf("%d",a++);
    return 0;
}