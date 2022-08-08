#include<stdio.h>

int main()
{
    int sum=0,i,n,j;
    printf("Enter the number");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        sum=sum+arr[j];
    }
    printf("%d",sum);
    return 0;
}