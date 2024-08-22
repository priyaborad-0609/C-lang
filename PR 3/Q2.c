#include<stdio.h>
void main()
{
	int n,count=0;
	
	printf("Enter Number: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("Enter Number digit: %d",count);
}
