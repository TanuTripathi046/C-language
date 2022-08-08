#include<stdio.h>
#include<math.h>
int main()
{
    int i,n=1;
    for(i=1;n<=100;i++)
    {
        printf("%d ",n);
        n=i*2+n;
    }
    return 0;
}