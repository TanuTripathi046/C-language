#include<stdio.h>

int main()
{
    int n,m=0,rem;
    printf("enter the number");
    scanf("%d",&n);
    int i=n;
    while(n!=0)
    {
        rem=n%10;
        m=m*10+rem;
        n=n/10;
    }
    if(i==m){
        printf("number is palindrome =%d",m);
    }
    else
    {
        printf("number is not palindrome");
    }
    return 0;
}