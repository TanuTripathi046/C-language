#include<stdio.h>

int main()
{
    int sum,a,b,c;
    printf("enter number");
    scanf("%d",&a);
    b=a/1000;
    c=a%10;
    sum=b+c;
    printf("%d",sum);
    return 0;
}