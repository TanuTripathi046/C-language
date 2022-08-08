#include<stdio.h>

int main()
{
    int i,c=0;
    char s[100],ch;
    printf("Enter the string\n");
    gets(s);
    printf("Enter character to find occurance\n");
    scanf("%c",&ch);
    for(i=0;s[i]!=0;i++)
    {
        if(ch==s[i])
        {
            c++;
        }
    }
    printf("The maximum occurance of %c is : %d",ch,c);
    return 0;
}