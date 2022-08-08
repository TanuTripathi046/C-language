#include<stdio.h>
int natsum();
int main()
{
    int n,m;
    printf("enter the value of number");
    scanf("%d%d",&n,&m);
    printf("The sum of natural numbers between %d and %d is : %d", n,m,natsum(n,m));
    natsum(n,m);
    return 0;
}
int natsum(int n, int m)
{
    static int sum=0;
    if(n>m)
    {
        return sum;
    }
    sum=sum+n;
    natsum(n+1,m);
}    