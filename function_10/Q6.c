#include<stdio.h>
#include<math.h>
void armstrong(int min,int max);
int main()
{
    int max,min;
    printf("Enter the numbers");
    scanf("%d%d",&min,&max);
    armstrong(min,max);
    return 0;
}
void armstrong(int min,int max)
{
    int i,c=0,m,rem;
    double result=0.0;
    /*if(max<min)
    {
        max=max+min;
        min=max-min;
        max=max-min;
    }*/
    for(i=min+1;i<max;i++)
    {
        m=i;
        while(m!=0)
        {
            m=m/10;
            c++;
        }
        m=i;
        while(m!=0)
        {
            rem=m%10;
            result=result+ pow(rem,c);
            m=m/10;
        }
        if(result==i)
        {
            printf("%d ",i);
        }
        c=0;
        result=0;
    }
}