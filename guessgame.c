#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
	int number,guess,n,g=0;
	char ch,ch1,ch2;
	again:
	srand(time(0));
	number=rand()%100+1;
	printf("---------------NUMBER GAME---------------\n");
	
	printf("Choose the difficulty level by pressing\n");
	printf("1-> For Easy Level\n");
	printf("2-> For Medium Level\n");
	printf("3-> For Hard level\n");
    scanf("%d",&n);
    if(n==1)
    {
    	goto level1;
	}
	else if(n==2)
	{
		goto level2;
	}
	else if(n==3)
	{
		goto level3;
	}
	else
	{
		exit(0);
	}
	level1:
		g=0;
		printf("---> INSTRUCTION <---\n");
		printf("You have to guess the number between 1 to 100\n");
		printf("You get 7 chances to guess the number\n");
		printf("If,You will guess the number in given chances you will win!!\n");
		printf("You will get the hints in between game\n");
		printf("**********Enjoy your game**********\n");
		do
		{
			printf("Guess the number between 1 to 100\n");
			scanf("%d",&guess);
			if(guess>number)
			{
				printf("Number is lower than guessed number\n");
			}
			else if(guess<number)
			{
				printf("Number is higher than guessed number\n");
			}
			else
			{
				printf("You guessed !! the number is %d\n",number);
				break;
			}
			g++;
			if(g==7)
			{
				printf("You loose!! Number is %d\n",number);
			}
		}while(g!=7);
		printf("play again (y/n)\n");
		getchar();
		scanf("%c",&ch);
		if(ch=='y'||ch=='Y')
		{
			goto again;
		}
		else
		{
			exit(0);
		}
		level2:
			g=0;
		printf("---> INSTRUCTION <---\n");
		printf("You have to guess the number between 1 to 100\n");
		printf("You get 5 chances to guess the number\n");
		printf("If,You will guess the number in given chances you will win!!\n");
		printf("You will get the hints in between game\n");
		printf("**********Enjoy your game**********\n");
		do
		{
			printf("Guess the number between 1 to 100\n");
			scanf("%d",&guess);
			if(guess>number)
			{
				printf("Number is lower than guessed number\n");
			}
			else if(guess<number)
			{
				printf("Number is higher than guessed number\n");
			}
			else
			{
				printf("You guessed !! the number is %d\n",number);
				break;
			}
			g++;
			if(g==5)
			{
				printf("You loose!! Number is %d\n",number);
			}
		}while(g!=5);
		printf("play again (y/n)\n");
		getchar();
		scanf("%c",&ch1);
		if(ch1=='y'||ch1=='Y')
		{
			goto again;
		}
		else
		{
			exit(0);
		}
		level3:
			g=0;
		printf("---> INSTRUCTION <---\n");
		printf("You have to guess the number between 1 to 100\n");
		printf("You get 3 chances to guess the number\n");
		printf("If,You will guess the number in given chances you will win!!\n");
		printf("You will get the hints in between game\n");
		printf("**********Enjoy your game**********\n");
		do
		{
			printf("Guess the number between 1 to 100\n");
			scanf("%d",&guess);
			if(guess>number)
			{
				printf("Number is lower than guessed number\n");
			}
			else if(guess<number)
			{
				printf("Number is higher than guessed number\n");
			}
			else
			{
				printf("You guessed !! the number is %d\n",number);
				break;
			}
			g++;
			if(g==3)
			{
				printf("You loose!! Number is %d\n",number);
			}
		}while(g!=3);
		printf("play again (y/n)\n");
		getchar();
		scanf("%c",&ch2);
		if(ch2=='y'||ch2=='Y')
		{
			goto again;
		}
		else
		{
			exit(0);
		}
		return 0;
}