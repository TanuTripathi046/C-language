#include<stdio.h>

int main()
{
    int a,b,c,d,e,sum;
    printf("enter the number");
    scanf("%d",&a);
    b=a/1000;
    c=(a%1000)/100;
    d=((a%1000)%100)/10;
    e=(((a%1000)%100)%10);
    sum=b+c+d+e;
    printf("%d",sum);
    return 0;
}