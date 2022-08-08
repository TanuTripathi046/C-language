#include<stdio.h>

int main()
{
    float w1,w2,it1,it2;
    printf("enter the values");
    scanf("%f%f%f%f",&w1,&w2,&it1,&it2);
    float avg=((w1*it1)+(w2*it2))/(it1+it2);
    printf("average=%f\n",avg);
    return 0;
}