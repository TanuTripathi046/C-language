#include<stdio.h>
void nat();
int main()
{
    int n,m;
    printf("enter the value of number");
    scanf("%d%d",&n,&m);
    printf("The natural numbers between %d and %d is :",n,m);
    nat(n,m);
    return 0;
}
void nat(int n,int m)
{
    if(n>m)
    {
    	return;
	}
	printf("%d ",n);
     nat(n+1,m);
}