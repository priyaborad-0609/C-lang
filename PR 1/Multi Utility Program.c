#include<stdio.h>
#include<conio.h>

void main()

{
	float salary,hra,da,ta;
	
	printf("Enter your salary");
	scanf("%f",&salary);
	
	 hra=10;
	 da=5;
	 ta=8;
	
	
	
	salary=salary+hra+da+ta*100/100;
	
	printf("gross salary:%f",salary);
	
	
}
