#include<stdio.h>
#include<string.h>
int main()
{
    int i,alp=0,num=0,spl=0;
    char s[10]="tanu@#$14";
       for(i=0;s[i]<'\0';i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
            {
                alp++;
            }
            else if(s[i]>='1' && s[i]<='9')
            {
                num++;
            }
            else
            {
                spl++;
            }
        }
         printf("alphabet=%d\nnumbers=%d\nspecial character=%d\n",alp,num,spl);  
    return 0;
}