#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="My name is Tanu Tripathi";
    char s2[]="My name is Tanu Tripathi";
    strcmp(s1,s2);
    if(strcmp(s1,s2)==0)
    {
        printf("Equal");
    }
    else if(strcmp(s1,s2)>0)
    {
        printf("Unequal with positive");
    }
    else if(strcmp(s1,s2)<0)
    {
        printf("Unequal with negative");
    }
    return 0;
}