#include<stdio.h>

int main()
{
    int r;
    float ar;
    printf("enter radius");
    scanf("%d",&r);
    ar=3.14f*r*r;
    printf("area=%.2f",ar);
    return 0;
}