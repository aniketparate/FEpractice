//If cost price and selling price of an item is input through the keyboard, WAP to determine whether 
//the seller has made profit or incurred loss. Also determine how much profit he made or loss be 
//incurred.

#include<stdio.h>
#include<conio.h>
int main()
{
	float cp,sp;
	
	printf("\n Enter cost price : ");
	scanf("%f",&cp);
	printf(" Enter selling price : ");
	scanf("%f",&sp);
	
	if(sp>cp)
	printf("\n\n PROFIT made is : %.2f",sp-cp);
	else
	printf("\n\n LOSS made is : %.2f",sp-cp);
	
	getch();
	return 0;
}