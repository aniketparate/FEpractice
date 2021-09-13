#include<stdio.h>

int main()
{
	float a,r,pi=3.14;
	
	printf("Enter value of Radius : ");
	scanf("%f",&r);
	
	a=pi*r*r ;
	printf("\nArea of circle is %.2f",a);
	
	return 0;
}