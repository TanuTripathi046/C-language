#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,c=0;
    char s1[100],s2[100];
    printf("enter the first string\n");
    gets(s1);
    printf("enter the second string\n");
    gets(s2);
    n=strlen(s2);
        for(i=0;i<n;i++)
        {
      if(s1[i]==s2[n-1-i])
       {
            c++;
       }
       else 
       {
         c--;
       }
        }
    if(c==n)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is not Plaindrome");
    }
    return 0;
}