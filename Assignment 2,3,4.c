// ASSIGNMENT 3 CONDITIONS
/*
1. Write a C program to evaluate the student performance
If % is >=90 then Excellent performance
If % is >=80 then  Very Good performance
If % is >=70 then Good performance
If % is >=60 then average performance
else Poor performance. 


#include<stdio.h>
#include<stdlib.h>

int main()
{
	float percent;
   
	printf(" Enter percentage : ");
   	scanf("%f",&percent);
   
   	if(percent<0 || percent>100)
   	{
		printf("\n # Please enter valid percentage # ");
   		exit(0);
	}
   
   	if(percent>=90 && percent<=100)
   	printf("\n Excellent performance");
   	else if(percent>=80 && percent<90)
	printf("\n Very Good performance");   	
	else if(percent>=70 && percent<80)
	printf("\n Good performance");
	else if(percent>=60 && percent<70)
	printf("\n Average performance");
   	else
	printf("\n Poor performance");
	
   	return 0;
}
*/


/*
Write a C program to check a year for leap year.
#include<stdio.h>

int main()
{
	int year;
	
	printf(" Enter year : ");
	scanf("%d",&year);
	
	if(year%4==0)
	printf("\n Its a LEAP YEAR ");
	else
	printf("\n Its not a LEAP YEAR");
	
	return 0;
}
*/

/*A company insures its drivers in the following cases:
- If the driver is married.
- If the driver is unmarried, male and above 30 years of age.
- If the driver is unmarried, female and above 25 years of age.

#include<stdio.h>

int main()
{
	int age;
	char status, gender;
	
	printf(" Enter marital status 'Y' or 'N' : ");
	scanf("%c",&status);
	printf(" Enter Gender in 'M' or 'F' : ");
	scanf(" %c",&gender);
	printf(" Enter age : ");
	scanf("%d",&age);
	
	if(status=='Y')
	printf("\n Elligible for insurance");
	else if(status=='N' && gender=='M' && age>30)
	printf("\n Elligible for insurance");
	else if(status=='N' && gender=='F' && age>25)
	printf("\n Elligible for insurance");
	else
	printf("\n Not elligible for insurance");
	
	return 0;
}*/


/*
A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.
#include<stdio.h>

int main()
{
	int salary,year,bonus;
	
	printf(" Enter your salary : ");
	scanf("%d",&salary);
	printf(" Enter years of service : ");
	scanf("%d",&year);
	
	bonus=salary + (5*salary)/100;
	
	if(year>5)
	printf(" Net salary with bonus obtained : %d",bonus);
	else
	printf(" No bonus obtained");

	return 0;
}*/

/*program to check a triangle is equilateral, isosceles or scalene.
Note :
An equilateral triangle is a triangle in which all three sides are equal.
A scalene triangle is a triangle that has three unequal sides.
An isosceles triangle is a triangle with (at least) two equal sides.

#include<stdio.h>

int main()
{
	int side_1,side_2,side_3;

	printf(" Enter side 1 : ");
	scanf("%d",&side_1);
	printf(" Enter side 2 : ");
	scanf("%d",&side_2);
	printf(" Enter side 3 : ");
	scanf("%d",&side_3);

	if(side_1==side_2 && side_1==side_3)
	printf("\n Its an EQUILATERAL TRIANGLE");
	else if(side_1==side_2 || side_1==side_3 || side_2==side_3)
	printf("\n Its an ISOSCELES TRIANGLE");
	else
	printf("\n Its an SCALENE TRIANGLE");

	return 0;
}
*/

/*
program to calculate the electricity bill (accept number of unit from user)
according to the following criteria :
    Unit                   Price 
First 100 units         no charge
Next 100 units          Rs 5 per unit
After 200 units         Rs 10 per unit

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int unit,charge;
	
	printf(" Enter total no. of units consumed : ");
	scanf("%d",&unit);
	
	if(unit<=100)
	{
		printf("\n No charge ");
		exit(0);	
	}
	else if(unit>100 && unit<=200)
	charge=(unit-100)*5;
	else
	charge=(100*5)+(unit-200)*10;
	
	printf("\n Final amount to be paid is : %d",charge);
	
	return 0;
}
*/

/*
Program to accept the cost price of a bike and display the 
road tax to be paid according to the following criteria :
Cost price (in Rs)                   Tax
> 100000                             15 %
> 50000 and <= 100000                10%
<= 50000                             5%


#include<stdio.h>

int main()
{
	int cost,tax;
	
	printf(" Enter the cost of bike : ");
	scanf("%d",&cost);
	
	if(cost<=50000)
	tax=(cost/100)*5;
	else if(cost>50000 && cost<=100000)
	tax=(cost/100)*10;
	else
	tax=(cost/100)*15;
	
	printf(" The ROAD TAX to be paided is : %d",tax);
	
	return 0;
}
*/

// ASSIGNMENT 2 LOOPS
/*
1. Write a C program to print the natural numbers up to n

#include<stdio.h>

int main()
{
	int n,i;
	
	printf(" Enter value of N : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		printf("\n %d",i);
		i++;
	}
	return 0;
}
*/

/*
Write a C program to print even numbers up to n

#include<stdio.h>

int main()
{
	int n,i;
	
	printf(" Enter value of N : ");
	scanf("%d",&n);
	
	i=0;
	while(i<=n)
	{
		printf("\n %d",i);
		i=i+2;
	}
	return 0;
}
*/

/*
Write a C program to print sum of even numbers up to n

#include<stdio.h>

int main()
{
	int n,i,sum;
	
	printf(" Enter value of N : ");
	scanf("%d",&n);
	
	i=0;
	sum=0;
	while(i<=n)
	{
		sum=sum+i;
		i=i+2;
	}
	printf("\n Sum of even no's upto N is : %d",sum);
	
	return 0;
}
*/

/*
Write a C program to print natural numbers up to n in reverse order.

#include<stdio.h>

int main()
{
	int n;
	
	printf(" Enter value of N : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		printf("\n %d",n);
		n--;
	}
	return 0;
}
*/

/*
Write a C program  find a factorial of given number

#include<stdio.h>

int main()
{
	int n,i;
	
	printf(" Enter value of N : ");
	scanf("%d",&n);
	
	i=1;
	while(n>0)
	{
		i=i*n;
		n--;
	}
	printf("\n Factorial is : %d",i);
	
	return 0;
}
*/

/*
Write a C program to find the sum of digits of given number

#include<stdio.h>

int main()
{
	int i,sum,rem;
	
	printf(" Enter the number : ");
	scanf("%d",&i);

	for(sum=0;i!=0;)
	{
		rem=i%10;
		sum=sum+rem;
		i=i/10;
	}
	printf("\n Sum of digits is : %d",sum);
	
	return 0;
}
*/

/*
Write a C program that prints       1 2 4 8 16 32 … 2n 

#include<stdio.h>

int main()
{
	int i,n,count;

	printf(" Enter value of power : ");
	scanf("%d",&n);

	for(i=1,count=0;count<=n;count++)
	{
		printf("  %d",i);
		i=i*2;
	}
	return 0;
}
*/

/*
Write a C program to produce following design
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
If user enters n value as 5

#include<stdio.h>

int main()
{
	int i,n,count;
	
	printf(" Enter value of n : ");
	scanf("%d",&n);
	
	for(count=1;count<=n;count++)
	{
		for(i=1;i<=count;i++)
		printf(" %d",i);
		printf("\n");
	}
	return 0;
}
*/

/*
Write a C program to produce following design                              
A
A B
A B C
A B C D
A B C D E
If user enters n value as 5

#include<stdio.h>

int main()
{
	int count,n,a;
	
	printf(" Enter value of n : ");
	scanf("%d",&n);
	
	for(count=1;count<=n;count++)
	{
		for(a=1;a<=count;a++)
		printf(" %c",'A'+a-1);
		printf("\n");
	}
	return 0;
}
*/

/*
Write a C program to check the entered number is prime or not

#include<stdio.h>

int main()
{
	int i,n,count;

	printf(" Enter the number : ");
	scanf("%d",&n);

	for(i=1,count=0;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	printf("\n The number %d is PRIME NUMBER",n);
	else
	printf("\n The number %d is not a PRIME NUMBER",n);

	return 0;
}
*/

// ASSIGNMENT 4 (ARRAY)
/*

*/