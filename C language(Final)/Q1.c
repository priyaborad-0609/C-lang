#include<stdio.h>
#include<conio.h>
void main()
{
	//WAP to fint the third angle of a triangle if two angles are given.
	
	int First_angle,Second_angle,Third_angle,n;
	
	printf("Enter First_angle: ");
	scanf("%d",&First_angle);
	printf("Enter Second_angle: ");
	scanf("%d",&Second_angle);
	
	Third_angle=180-(First_angle+Second_angle);
	printf("\n");
	
	printf("Third_angle is: %d",Third_angle);
}
