#include<stdio.h>
int main()
{
    int min,max,i;
      int  flag;
    printf("Enter the numbers");
    scanf("%d%d",&min,&max);
      while(min<max)
      {
        flag=0;
        if(min<=1)
        {
            ++min;
            continue;
        }
        for(i=2;i<min/2;++i)
        {
            if(min%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",min);
        }
        ++min;
      }
    return 0;
}