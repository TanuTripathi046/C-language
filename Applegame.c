#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	
	int n=21,m,i,j,a=2;
	char p1[]="tanu@123",u1[5]="tanu";
	char p2[9],u2[5],ch;
	printf("\t**********APPLE GAME**********\n");
    //again1:
    for(i=0;i<3;i++)
    {
   	printf("Enter username\n");
    gets(u2);
    u2[8]='\0';
    printf("Enter password\n");
    do
    {
    	p2[j]=getch();
    if(p2[j]!='\r')
    {
		printf("*");
    }
	j++;
	}while(p2[j-1]!='\r');
    p2[j-1]='\0';
	if((strcmp(p1,p2)==0)&&(strcmp(u1,u2)==0))
	{
		printf("\n login succesfully !!\n");
		goto again;
	}
	else
	{         int num=2-i;
		printf("\nInvalid usename and password !!\n");
		printf("%d chance remaining\n",num);
	    if(num==0)
	    {
	       exit(0);
		}
		continue;
	}
	}
    again:
    printf("!! ----------------INSTRUCTIONS---------------- !!\n");
    printf("\n1-> There are total 21 apples in the game.\n");
    printf("2-> You have to enter the numbers of apple between 1 to 4.\n");
    printf("3-> Who get the last apple will be looser.\n");
    printf("4-> If,you enter greater number than 4, 3 times you will loose\n");
	  while(n!=1)
	{
		printf("\nYOUR CHANCE :  \tRemaining Apple %d\n",n);
		scanf("%d",&m);
		if(m>=1&&m<=4)
		{
			n=(n-m);
		  printf("\nCOMPUTER CHANCE : %d\n",(5-m));
		  n=n-(5-m);	
		}
		else
		{
			printf("\nFOLLOW THE RULES : Enter the Number from 1 to 4 :\n");
		}
	}
	printf("\nUSER CHANCE : %d\n",n);
	printf("****YOU LOOSE BETTER LUCK NEXT TIME****\n");
	printf("Play Again (y/n) !!");
	getchar();
	scanf("%c",&ch);
	if(ch=='Y'||ch=='y') 
	{
		n=21;
		goto again;
	}
	else
	{
		exit(0);
	}
	return 0;
}
