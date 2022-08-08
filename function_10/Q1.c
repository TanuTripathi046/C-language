#include<stdio.h>
void cube(int a);
int main()
{
    int a=4;
    cube(a);
    return 0;
}
void cube(int a)
{
    int c=a*a*a;
    printf("%d",c);
}