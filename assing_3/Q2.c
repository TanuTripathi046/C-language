#include<stdio.h>

int main()
{
    int id,th,aph;
    printf("enter the values");
    scanf("%d%d%d",&id,&th,&aph);
    int ts=th*aph;
    printf("employee id = %d\ntotal salary = %d\n",id,ts);
    return 0;
}