#include<stdio.h>
void main()
{
	int n;
	
	printf("Enter Number: ");
	scanf("%d",&n);
	
	int ld=n%10;
	
	printf("Last digit:%d\n",ld);
	
	while(n>9)
	{
		n=n/10;
	}
	printf("First digit :%d\n\n",n);
	printf("sum of First and Last digit:%d",ld+n);
}
