#include<stdio.h>
void main()
{
	int i,j,k,l,m,n,o;
	
	for(m=5; m>4; m--)
	{
		for(n=1; n<=5; n++)
		{
			printf(" ");
		}
		printf("%d",m);
	}
	printf("\n");
	for(i=4; i>=1; i--)
	{
		for(k=1; k<=i; k++)
		{
			printf(" ");
		}
		for(j=i; j<=5; j++)
		{
			printf("%d",j);
		}
		for(l=4; l<=1; l++)
		{
			for(o=4; o>=i; o--)
			{
				printf("%d",l);
			}
		}	
		printf("\n");
	}
}
