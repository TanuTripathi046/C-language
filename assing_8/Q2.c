#include<stdio.h>

int main()
{
      int i,j,n,m;
      printf("Enter the number of row");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(m=1;m<=i;m++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}