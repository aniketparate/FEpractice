//WAP to display grades by taking input of marks in 5 subjects

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int phy,chem,maths,eng,cs,total;
	float percent;
	
	//Taking input from user
	printf("\n  Enter the marks for 5 subjects out of 100\n");
	printf("\n  The marks entered should be greater than 0 and less than 100\n");
	printf("\n  Physics : ");
	scanf("%d",&phy);
	printf("  Chemistry : ");
	scanf("%d",&chem);
	printf("  Maths : ");
	scanf("%d",&maths);
	printf("  English : ");
	scanf("%d",&eng);
	printf("  Computer Science : ");
	scanf("%d",&cs);
	
	if(phy>100 || chem>100 || maths>100 || eng>100 || cs>100)
	{
		printf("\n  # Please enter valid score #");
		exit(0);
    }
    
	if(phy<0 || chem<0 || maths<0 || eng<0 || cs<0)
	{
		printf("\n  # Please enter valid score #");
		exit(0);
    }
    
    //Calculations
    total = (phy + chem + maths + eng + cs);
    percent = (total/500.0)*100;
    
    //Printing Result
    if(percent>=75 && percent<=100)
    {
    	printf("\n  Your score is %f percent and grade is DISTINCTION \n",percent);
	}
    else if(percent>=60 && percent<75)
    {
    	printf("\n  Your score is %f percent and grade is FIRST CLASS \n",percent);
	}
	else if(percent>=50 && percent<60)
    {
    	printf("\n  Your score is %f percent and grade is SECOND CLASS \n",percent);
	}
	else if(percent>=40 && percent<50)
    {
    	printf("\n  Your score is %f percent and grade is PASS CLASS \n",percent);
	}
	else
    {
    	printf("\n  Your score is %f percent and grade is FAIL \n",percent);
	}
	
	return 0;	
}