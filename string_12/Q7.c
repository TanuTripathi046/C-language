#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,v=0,c=0;
    char s[100];
    printf("Enter the string\n");
    gets(s);
    while(s[i]!='\0')
    {
        if((s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'))
        {
            v++;
        }
        else
        {
            c++;
        }
        i++;
    }
    printf("The vowels in the string is : %d\n",v);
    printf("The consonant in the string is : %d",c);
    return 0;
}