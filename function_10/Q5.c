#include<stdio.h>
void primenum();
int main()
{
    int max,min;
    printf("Enter the numbers");
    scanf("%d%d",&min,&max);
    primenum(max,min);
    return 0;
}
void primenum(int max,int min)
{
      int i ,flag;
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
}