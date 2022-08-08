#include<stdio.h>

int main()
{
    int i;
    int a[6],b[6],s[6];
    printf("Enter elements of a\n");
    for(i=0;i<6;i++)
    {
    	printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Enter elements of b\n");
    for(i=0;i<6;i++)
    {
    	printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
    printf("\n");
    for(i=0;i<6;i++)
    {
    	
        s[i]  = a[i] + b[i];
    }
    printf("\n sum of arrays :");
    for(i=0;i<6;i++)
    {
    	printf("\nsum[%d]=%d ",i,s[i]);
	}
    return 0;
}