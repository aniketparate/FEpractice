//Write a ‘C’ program to read two numbers and print the sum, difference, product, and quotient of the two numbers.

#include<stdio.h>
#include<conio.h>

int main()
{
	float NUM_1, NUM_2, sum, difference, product, quotient;
	
	//Taking input from the user
	printf("\n\nEnter 1st number : ");
	scanf("%f",&NUM_1);
	
	printf("\nEnter 2st number : ");
	scanf("%f",&NUM_2);
	
	//Calculation
	sum = NUM_1 + NUM_2 ;                         //addition fucntion
	
	difference = NUM_1 - NUM_2 ;                  //subtraction function
	
	product = NUM_1 * NUM_2 ;                     //multiflication function
	
	quotient = NUM_1 / NUM_2 ;                    //division function
	
	//Printing Result
	printf("\n\n\t\t\t\t  *******ARITHMETIC OPERATIONS*******  \n\n");
	printf("\t\t\t\t  Sum of two mumbers = %.2f  \n\n", sum);
	printf("\t\t\t\t  Difference of two mumbers = %.2f  \n\n", difference);
	printf("\t\t\t\t  Product of two mumbers = %.2f  \n\n", product);
	printf("\t\t\t\t  Quotient of two mumbers = %.2f  \n\n", quotient);
	
	getch();
}