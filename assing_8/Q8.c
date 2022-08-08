#include<stdio.h>

int main()
{
    int i,j,n;
    printf("enter the number for row");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            printf("%c",('A'+j-1));
        }
        printf("\n");
    }
    return 0;
}