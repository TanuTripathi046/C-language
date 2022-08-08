#include<stdio.h>

int main()
{
    int a;
    float bill;
    printf("enter the value of a");
    scanf("%d",&a);
    if(a>0 && a<=50)
    {
        bill=a*0.50;
    }
    else if(a>50 && a<=150)
    {
        bill=(50*0.5)+ ((a-50)*0.75);
    }
    else if(a>150&& a<=250)
    {
        bill=(50*0.5)+(100*0.75)+((a-50-100)*1.20);
    }
    else if(a>250)
    {
        bill=(50*0.50)+(100*0.75)+(100*1.20)+((a-50-100-100)*1.50);
    }
    else
    {
        printf("no bill due");
    }
    printf("bill=%f",(bill+(bill*0.2)));
    return 0;
}