#include<stdio.h>
void main()
{
	int i,j,n;
	
	printf("Enter the array's row & column size: ");
	scanf("%d",&n);
	
	int a[3][3];
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter a[%d][%d]:",i,j);
			scanf("%d",&a[j][i]);
		}
		printf("\n");
	}
	for(i=0; i<3; i++)
   {
	for(j=0; j<3; j++)
	{
		printf("%d",a[i][j]);
	}
	printf("\n");
   }
}

