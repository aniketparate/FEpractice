#include<stdio.h>

int main()
{
	float a,b,c;
	
	printf("Enter 1st number : ");
	scanf("%f",&a);
	
	printf("Enter 2st number : ");
	scanf("%f",&b);
	
	c=a/b;
	
	printf("Division is %.2f",c);
	return 0;
}