#include<stdio.h>

int main()
{
    int i,n,j;
    printf("Enter the number");
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        arr1[j]=arr[j];
    }
    for(j=0;j<n;j++)
    {
      printf("%d ",arr1[j]);
    }
    return 0;
}