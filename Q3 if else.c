#include<stdio.h>
#include<conio.h>

void main()

{
	int maths,science,english;
	float averagemarks,per;
	printf("Enter  marks  maths:");
	scanf("%d",&maths);
	printf("Enter  marks  english:");
	scanf("%d",&english);
	printf("Enter  marks  science:");
	scanf("%d",&science);
	
	averagemarks =maths+english+science;
	per =averagemarks*100/300;
	printf("%.2f",per);
	
	
	
}
