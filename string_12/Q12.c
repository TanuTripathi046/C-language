#include<stdio.h>
#define MAX 100
#include<string.h>
int main()
{
	char s[MAX];
	int feq[26],i,l;
	gets(s);
	l=strlen(s);
	for(i=0;i<26;i++)
	{
		feq[i]=0;
	}
	for(i=0;i<l;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			feq[s[i]-97]++;
		}
		if(s[i]>='A'&&s[i]<='Z')
		{
			feq[s[i]-65]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(feq[i]!=0)
		{
			printf("%c - %d\n",(i+97),feq[i]);
		}
	}
	return 0;
}