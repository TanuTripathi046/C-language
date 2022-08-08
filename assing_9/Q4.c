#include<stdio.h>

int main()
{
    int sum,i,n,j;
    printf("Enter the number");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=0;
    for(j=0;j<n;j++)
    {
        if(j%2==0)
        {
        sum=sum+arr[j];
        }
    }
    printf("%d",sum);
    return 0;
}