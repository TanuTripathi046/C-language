#include<stdio.h>

int main()
{
    int x,y;
    printf("enter numbers");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d\n%d\n",x,y);
    return 0;
}