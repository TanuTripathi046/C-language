#include<stdio.h>

int main()
{
    int bs;
    float ts;
    printf("enter the basic salary");
    scanf("%d",&bs);
    if(bs<=2000)
    {
        ts=bs+(bs*0.1)+(bs*0.2);
    }
    else if(bs>2000&&bs<=5000)
    {
        ts=bs+(bs*0.2)+(bs*0.3);
    }
    else if(bs>5000&&bs<=10000)
    {
        ts=bs+(bs*0.3)+(bs*0.4);
    }
    else if(bs>10000)
    {
        ts=bs+(bs*0.5)+(bs*0.5);
    }
    printf("%.2f",ts);
    return 0;
}