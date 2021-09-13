//Write a simple program to develop a simple calculator and display the result using switch statement.

#include<stdio.h>

int main()
{
	int a,b,ch;
	char n='y';
	
	//Taking input from user
	printf("\n Enter 1st nos : ");
	scanf("%d",&a);
	printf(" Enter 2st nos : ");
	scanf("%d",&b);
	
	//Printing Result
	do
	{
	printf("\n 1:Add\n 2:Subtract\n 3:Multiply\n 4:Divide\n 5:Modulus \n Enter your choice : ");
	scanf("%d",&ch);
	printf("\n SOLUTION : ");	
		switch(ch)
		{
			case 1:
			printf(" %d\n",a+b);		//addition
			break;
			case 2:
			printf(" %d\n",a-b);		//subtraction
			break;
			case 3:
			printf(" %d\n",a*b);		//multiplication
			break;
			case 4:
			printf(" %f\n",(float)a/b); //divide
			break;
			case 5:
			printf(" %d\n",a%b);		//modulus
			break;

			default:
			printf(" Invalid Input");
		}
	printf("\n Do you want to try another operation? : ");
	scanf(" %c",&n);
	} while (n=='y');
	
	return 0;
}