#include<stdio.h>
#include<conio.h>
void main()
{
	//WAP to print total number of days in a month using switch case.
	
	int n,choice=0;
	
	printf("Enter a Month: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("In %d month there are 30 days ",choice);
		break;
		case 2:printf("In %d month there are 28 days ",choice);
		break;
		case 3:printf("In %d month there are 30 days ",choice);
		break;
		case 4:printf("In %d month there are 31 days ",choice);
		break;
		case 5:printf("In %d month there are 30 days ",choice);
		break;
		case 6:printf("In %d month there are 31 days ",choice);
		break;
		case 7:printf("In %d month there are 30 days ",choice);
		break;
		case 8:printf("In %d month there are 31 days ",choice);
		break;
		case 9:printf("In %d month there are 30 days ",choice);
		break;
		case 10:printf("In %d month there are 31 days ",choice);
		break;
		case 11:printf("In %d month there are 30 days ",choice);
		break;
		case 12:printf("In %d month there are 31 days ",choice);
		break;
		default:printf("Enter valid input");
		
	}
	
	
}
