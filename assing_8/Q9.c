#include<stdio.h>

int main()
{
    int i,j,n,m;
    printf("enter the number for row");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            printf("  ");
        }
         m=0;
        while(m!=(2*i-1))
        {
            printf("* ");
            m++;
        }
        printf("\n");
    }
    return 0;
}