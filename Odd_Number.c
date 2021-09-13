//Prog to print odd nos between 1 to 100 using while loop

/*
#include<stdio.h>
#include<conio.h>

int main()
{
	int a=1;
	while (a<100)
	{
		printf(" %d",a);
		a=a+2;
	}
	getch();
}
*/

/*
#include<stdio.h>
#include<conio.h>

int main()
{
	int a=1;
	while (a<100)
	{
		if (a%2 !=0)
			printf(" %d",a);
		a++;
	}
	getch();
}
*/

//First 100 odd number
/*
#include<stdio.h>
#include<conio.h>


int main()
{
	int a=1;
	while (a<200)
	{
		printf(" %d",a);
		a=a+2;
	}
	getch();
}
*/

//Prog to print first 100 odd nos using while version 2

#include<stdio.h>
#include<conio.h>


int main()
{
	int a=1, count=1;
	while (count<=100)
	{
		printf(" %d",a);
		a=a+2;
		count++;
	}
	getch();
}
