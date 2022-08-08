#include<stdio.h>
void diameter();
void circum();
void area();
int main()
{
    int a=3;
    diameter(a);
    circum(a);
    area(a);
    return 0;
}
void diameter(int a)
{
    int d =2*a;
    printf("%d\n",d);
}
void circum(int a)
{
    float c=2*3.14*a;
    printf("%f\n",c);
}
void area(int a)
{
    float ar=3.14*a*a;
    printf("%f\n",ar);
}