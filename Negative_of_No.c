#include<stdio.h>
#include<conio.h>

int main()
{
   int a;
   
   printf(" Enter value of a : ");
   scanf("%d",&a);
   
   if (a<0) 
      	printf(" Positive value of a is %d",-a);
   
   getch();
   return 0;
}