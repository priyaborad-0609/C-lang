#include<stdio.h>
void main()
{
	int i,j,n,max;
	
	printf("Enter the array's row size: ");
	scanf("%d",&n);
	printf("Enter the array's column size: ");
	scanf("%d",&n);
	
	int mat[i][j];
	
	for(i=0; i<n; i++)
	{
	    for(j=0; j<n; j++)
		{
			printf("Enter a[%d][%d]:",i,j);
			scanf("%d",&mat[i][j]);
	    }
	}
	max=mat[0][0];
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(max<mat[i][j])
			max=mat[i][j];
		}
	}
	printf("Largest element: %d\n",max);
	
}
