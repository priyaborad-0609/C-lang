#include<stdio.h>
#include<conio.h>

void main()

{
	int firstangle,secondangle,thirdangle;
	
	
    printf("Enter firstangle:");
    scanf("%d",&firstangle);
    printf("Enter second angle:");
    scanf("%d",&secondangle);
      
    thirdangle=180-(firstangle+secondangle);
    printf("Thirdangle:%d",thirdangle);
    
}
    
