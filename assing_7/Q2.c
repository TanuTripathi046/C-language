#include<stdio.h>
int fact(int);
int main()
{
    int n,rem,sum=0; 
    printf("Enter the number");
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        rem=n%10;
        //fact(rem);
        sum=sum+fact(rem);
        n=n/10;
    }
    if(sum==t)
    {
        printf("Number is strong number");
    }
    else
    {
        printf("Number is not strong number");
    }
    return 0;
}
int fact(int rem)
{
	int m=0;
    if(rem==1||rem==0)
    {
        return 1;
    }
    else
    {
        m=m+(rem*fact(rem-1));
    }
    return m;
}