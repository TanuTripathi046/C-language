#include<stdio.h>
int fact();
int main()
{
    int n;
    printf("Enter the numbers");
    scanf("%d",&n);
    printf("The factorial of %d is %d ",n,fact(n));
    fact(n);
    return 0;
}
int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return n*(fact(n-1));
}