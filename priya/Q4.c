#include<stdio.h>
void main()
{
	int radius;
	float area;
	
	printf("Enter radius: ");
	scanf("%d",&radius);
	
	area=4/3*3.14*radius*radius*radius;
	printf("Ans:%.2f\n",area);
}