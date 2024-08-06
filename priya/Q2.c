#include<stdio.h>
void main()
{
	int age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("Eligible for vote");
	}
	else if(age<=18)
	{
		printf("Not Eligible for vote");
	}
	else 
	{
	    printf("Enter valid age");	
	}
	
}