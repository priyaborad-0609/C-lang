#include<stdio.h>
void main()
{
	int n,count=0,ld;
	
	printf("Enter Number: ");
	scanf("%d",&n);
	ld=n%10;
	while(n==0)
	{
		n=n/10;
		count++;
	}
	printf("Number of digit is: %d",count+ld);
}
