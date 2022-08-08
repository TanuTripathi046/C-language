#include<stdio.h>
int maxmin();
int main()
{
    int a,b;
    printf("Enter the number");
    scanf("%d%d",&a,&b);
    maxmin(a,b);
    return 0;
}
int maxmin(int a,int b)
{
    if(a>b)
    {
        return printf("a is greater");
    }
    else
    {
        return printf("b is greater");
    }
}