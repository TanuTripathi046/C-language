#include<stdio.h>
void even();
void odd();
int main()
{
    int n,m;
    printf("enter the value of number");
    scanf("%d%d",&n,&m);
    //printf("The even numbers between %d and %d is :",n,m);
    printf("The odd numbers between %d and %d is :",n,m);
    //even(n,m);
    odd(n,m);
    return 0;
}
/*void even(int n,int m)  //for even numbers
{
    if(n>m)
    {
    	return;
	}
    if(n%2==0)
    {
	printf("%d ",n);
    }
    even(n+1,m);
}*/
void odd(int n,int m)  //for odd numbers
{
    if(n>m)
    {
        return;
    }
    if(n%2!=0)
    {
	printf("%d ",n);
    }
    odd(n+1,m);
}