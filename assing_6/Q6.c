#include<stdio.h>

int main()
{
    int sum=0,n,i,rem;
    printf("enter the number");
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(i==sum)
    {
        printf("%d is armstrong number",sum);
    }
    else
    {
        printf("%d is not armstrong number",sum);
    }
    return 0;
}