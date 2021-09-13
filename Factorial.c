/*To print the Factorial of number N
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n;
	printf("Enter the value of N ");
	scanf("%d",&n);
	
	for(i=1;n>=1;n--)
	{
		i=n*i;
	}
	printf("%d",i);
	getch();
}
*/
/*
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	long int fact;
	printf("Enter value of n : ");
	scanf("%d",&n);
		for(fact=1;n>0;n--)
			{   
				fact*=n;
			}
		printf("%d",fact);
	getch();
	return 0;
}
*/

/*
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	long int fact;
	
	printf("Enter value of n : ");
	scanf("%d",&n);
	
	for(i=1,fact=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial is %d",fact);
	
	getch();
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	for(i=1;n>=1;n--)
	n=n*i;
	return 0;
}