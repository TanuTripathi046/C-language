#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of row");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}