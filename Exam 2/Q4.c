#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	//a,b,c
	if(a<b)
	{
		if(a<c)
		{
			printf("a is minimum");
		}
		else
		{
			printf("c is minimum");
		}
	}
	else
	{
		printf("b is minimum");
	}
}
