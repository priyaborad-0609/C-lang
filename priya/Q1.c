#include<stdio.h>
void main()
{
	int First_angle,Second_angle,Third_angle;
	
	printf("First_angle: ");
	scanf("%d",&First_angle);
	printf("Second_angle: ");
	scanf("%d",&Second_angle);
	
	Third_angle=180-(First_angle+Second_angle)*100/100;
	printf("%d",Third_angle);
	
	
}