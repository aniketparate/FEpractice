//Prog tp print sum of first 10 nos using while

/*
#include<stdio.h>
#include<conio.h>

int main()
{
	int a=1, sum=0;
	while (a<=10)
	{
		sum=sum+a;
		a++;	
	}
	printf("sum of first 10 nos is %d",sum);
	getch();
}
*/

/*
#include<stdio.h>
#include<conio.h>

int main()
{
	int a=1, sum=0;
	while (a<=10)
	{
		sum=sum+a;
		printf("sum of first %d nos is %d\n",a,sum);
		a++;
	}
	getch();
}
*/

/*
#include<stdio.h>
#include<conio.h>

int main()
{
	int a=1, sum=0;
	while (a<=10)
	{
		sum=sum+a;
		printf("sum = %d\n",sum);
		a++;
	}
	getch();
}
*/

//Prog to print addition os nos and nos taken from the user using while
//Assuming user enter 5 nos

#include<stdio.h>
#include<conio.h>

int main()
{
	int n, sum=0, count=1;
	
	while(count<=5)
	{
	printf(" Enter a no : ");
	scanf("%d",&n);
	sum=sum+n;
	printf(" sum = %d + %d",sum,n);
	}
}
