#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int ms;
    int h,m,s;
    printf("enter time in ms");
    scanf("%d",&ms);
    h=(ms/3600000)%24;
    m=(ms/60000)%60;
    s=(ms/1000)%60;
    printf("%d:%d:%d",h,m,s);
    return 0;
}