#include<stdio.h>
void main()
{
	int n;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	do
	{
		printf("%d",n);
		
	}while(n%2==1);
}
