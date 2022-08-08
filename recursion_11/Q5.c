#include<stdio.h>
int natsum();
int main()
{
    int n;
    printf("enter the value of number");
    scanf("%d",&n);
    printf("The sum of natural numbers is %d  :",natsum(n));
    natsum(n);
    return 0;
}
int natsum(int n)
{
    if(n!=0)
    {
        return n + natsum(n-1);
    }
    else 
    {
        return n;
    }
}