#include<stdio.h>
void main()
{
	int n,i,j,r,c,n1,n2,sum;
	
	printf("Enter the array's row size: ");
	scanf("%d",&r);
	printf("Enter the array's column size: ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter row Number: ");
	scanf("%d",&n1);
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(n1==i)
			{
				printf("%d",a[i][j]);
				sum=sum+a[i][j];
			}
			printf("\n");
		}
	}
	printf("Enter column Number: ");
	scanf("%d",&n2);
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(n2==j)
			{
				printf("%d",a[i][j]);
				sum=sum+a[i][j];
			}
			printf("\n");
		}
	}
	printf("Sum of row: %d",sum);
	printf("Sum of column: %d\n",sum);
	
}
