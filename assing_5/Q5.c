#include<stdio.h>

int main()
{
    int a,b;
    char rem;
    printf("enter the numbers");
    scanf("%d%d\n",&a,&b);
    scanf("%c",&rem);
    switch(rem)
    {
        case '+':
        printf("Sum is=%d",a+b);
        break;
        case '-':
        printf("Sub is=%d",a-b);
        break;
        case '*':
        printf("mul is=%d",a*b);
        break;
        case '/':
        printf("Div is=%d",a/b);
        break;
    }
    return 0;
}