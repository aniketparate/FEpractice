#include <stdio.h>
#include<conio.h>
 
int main()
{
	float a,b,c,X1,X2;
	
	printf("  Enter value of a : ");
	scanf("%f",&a);
	
	printf("  Enter value of b : ");
	scanf("%f",&b);
	
	printf("Enter value of c : ");
	scanf("%f",&c);
	
	if (a>b || c>b)
	{
		printf("\n\n Roots are imaaginary");
	}
	else
	{
		X1=(-b-sqrt(b*b-4*a*c))/(2*a);
		X2=(-b+sqrt(b*b-4*a*c))/(2*a);
		
		printf("\n\n First root is X1 = %f \n\n",X1);
		printf(" First root is X2 = %f",X2);
	}
	getch();
}