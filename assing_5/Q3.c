#include<stdio.h>

int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num<10)
    {
        printf("Number is single digit");
    }
    else if(num<100)
    {
        printf("Number is two digit");
    }
    else if(num<999)
    {
        printf("Numbere is three digit");
    }
    else
    {
        printf("invalid number");
    }
    return 0;
}