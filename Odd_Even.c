//Write a ‘C’ program to read the mark of the student and display grade.

#include<stdio.h>

int main()
{
	int n;
	
	//Taking input from user
	printf("\n Enter value of N : ");
	scanf("%d",&n);
	
	//Printing Result using if...else if...else statement
	if(n==0)
	{
	printf(" THE %d IS NEITHER EVEN NOR ODD",n);
	}
	else if (n%2==0)
	{
	printf("\n THE %d NUMBER IS EVEN NUMBER",n);
	}
	else
	{
	printf("\n THE %d NUMBER IS ODD NUMBER",n);
	}
	
	return 0;
}