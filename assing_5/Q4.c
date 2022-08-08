#include<stdio.h>

int main()
{
    char num;
    printf("enter the value");
    scanf("%c",&num);
    if((num>='a'&&num<='z')||(num>='A'&&num<='Z'))
    {
        printf("Number is alphabet");
    }
    else if(num>='0'&&num<='9')
    {
        printf("Number is digit");
    }
    else
    {
        printf("Number is special character");
    }
    return 0;
}