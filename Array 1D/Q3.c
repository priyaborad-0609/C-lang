#include<stdio.h>
void main()
{
	int i,n;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter a: ");
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("Enter b: ");
		scanf("%d",&b[i]);
	}
	for(i=0; i<n; i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("c=%d\n",c[i]);
	}
	
	

}
