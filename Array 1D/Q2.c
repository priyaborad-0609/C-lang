#include<stdio.h>
void main()
{
	int i,n;
	float avg,sum=0;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d];",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("avg of array: %.2f",avg);
	
}
