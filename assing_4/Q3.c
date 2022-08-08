#include<stdio.h>

int main()
{
    int a;
    printf("enter the year");
    scanf("%d",&a);
    (a%4==0&&a%100==0)||(a%400==0)?printf("year is a leap year"):printf("year is not leap year");
    return 0;
}