#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30]="My name is Tanu Tripathi";
    char s2[30];
    strcpy(s2,s1);
    printf("%s",s2);
    return 0;
}