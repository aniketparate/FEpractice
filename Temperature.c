//Write a ‘C’ program to convert the given temperature in degree centigrade to Fahrenheit and vice versa.

#include<stdio.h>
#include<conio.h>

int main()
{
	float Temp_1, Temp_2, celsius, fahrenheit;
	
	//Taking input from the user
	printf("\n\nEnter temperature in Celsius : ");
	scanf("%f", &Temp_1);
	
	printf("\nEnter temperature in Fahrenheit : ");
	scanf("%f", &Temp_2);
	
	//calculate
	fahrenheit = (Temp_1 * 9/5) + 32;        //conversion into fahrenheit
	
	celsius = (Temp_2 - 32) * 5/9;           //conversion into celsius
	
	//Print Result
	printf("\a\n\n  *******CONVERSION*******  \n\n");
	printf("%.2f Celsius = %.2f Fahrenheit\n\n", Temp_1, fahrenheit);
	printf("%.2f Fahrenheit = %.2f Celsius", Temp_2, celsius);
	
	getch();
	return 0;
}