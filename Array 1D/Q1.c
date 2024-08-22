#include<stdio.h>
void main()
{
	int i,n;
	
	printf("Enter a size of array: ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("Length of array %d",n);
}
