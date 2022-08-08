#include<stdio.h>
int evenodd(int a);
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    evenodd(a);
    return 0;
}
int evenodd(int a)
{
    if(a%2==0)
    {
        return printf("Even");
    }
    else
    {
        return printf("Odd");
    }
}