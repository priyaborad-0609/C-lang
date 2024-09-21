#include<stdio.h>
#include<conio.h>
void main()
{
	//WAP in c to makr such a pattern using loop concept.
	
	int i,j,n;
	
	for(i=5; i>=1; i--)
	{
		for(j=i; j>=1; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
}
