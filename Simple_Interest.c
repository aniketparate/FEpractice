//Write a ‘C’ program to find the simple interest for the Amount (p), Rate of Interest (r), and Number of years (n).

#include<stdio.h>
#include<conio.h>

int main()
{
	float p,r,n,interest;
	
	//Taking input from the user
	printf("\nEnter Principal Amount : ");
	scanf("%f",&p);
	
	printf("\nEnter Rate of Interest : ");
	scanf("%f",&r);
	
	printf("\nEnter Number of years : ");
	scanf("%f",&n);
	
	//Calculation
		interest = (p * r * n)/100;           //simple interest formula
	
	//Printing Result
	printf("\n*******RESULT*******\n\n");
	printf("Principal = %.2f \n\n", p);
	printf("No of years = %.2f \n\n", n);
	printf("Rate of Interest = %.2f \n\n", r);
	printf("Simple Interest = %.2f", interest);
	
	getch();
}