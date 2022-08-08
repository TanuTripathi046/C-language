#include<stdio.h>

int main()
{
    float c,f;
    printf("enter fahrenheit");
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("%f",c);
    return 0;
}