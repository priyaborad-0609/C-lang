#include<stdio.h>

int sum(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int Multiply(int a,int b)
{
	return a*b;
}
int Division(int a,int b)
{
	return a/b;
}
int Module(int a,int b)
{
	return a%b;
}


void main()
{


	int n,r,h,result,choice,i=1;
	
    while(i==1)
    {   

	printf("Press 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for % \n");
	printf("Press 0 for the exit\n");
	
	printf("Enter your choice: ");
	scanf("%d",&choice);
	if(choice==6)
	{
		break;
	}
	printf("Enter the first number: ");
    scanf("%d",&r);
	printf("Enter the second number: ");
	scanf("%d",&h);
	
	switch(choice)
	{
		case 1:
			result=sum(r,h);
			printf("Sum of %d and %d is %d",r,h,result);
			break;
		case 2:
			result=sub(r,h);
			printf("sub of %d and %d is %d",r,h,result);
			break;
		case 3:
			result=Multiply(r,h);
			printf("Multiply of %d and %d is %d",r,h,result);
			break;
		case 4:
			result=Division(r,h);
			printf("Division of %d and %d is %d",r,h,result);
			break;
		case 5:
			result=Module(r,h);
			printf("Module of %d and %d is %d",r,h,result);
			break;
			
			default:
				printf("Exit");
			
	}
	
	}
	printf("Code closed !");
}
	
	
	

