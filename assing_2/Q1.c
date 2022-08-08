#include<stdio.h>

int main()
{
    int p,c,m,b,h,total;
    float avg,per;
    printf("enter the numbers");
    scanf("%d%d%d%d%d",&p,&c,&m,&b,&h);
    total=p+c+m+b+h;
    avg=(total)/5;
    per=avg;
    printf("%d\n%f\n%f\n",total,avg,per);
    return 0;
}