#include<stdio.h>
#include<conio.h>

void main()

{
	int mark;
	char grade;
	
	printf("Enter your mark:");
	scanf("%d",&mark);
	
	(mark>=80 && mark<100)
	
	? printf("your grade is A\n")
	:
	(mark>=60 && mark<80)
	
	? printf("your grade is B\n")
	:
	(mark>=50 && mark<60)

	? printf("your grade is C\n")
	:
	(mark>=30 && mark<50)
		
    ? printf("your grade is D\n")
	:
	(mark>=0 && mark<30)
	
	
	
	?printf("your grade is F\n")
	:printf("Enter valid number");
	
    printf("Enter your grade:");
    scanf(" %c",&grade);
	
switch(grade)
{
	case 'a':
	printf("Excellent Work!");
	break;
	case 'b':
	printf("Well Done");
	break;
	case 'c':
	printf("Good job");
	case 'd':
	printf("You passed");
	case 'f':
	printf("sorry you failed");
}


	if(grade=='a' || grade=='b' || grade=='c' || grade=='d')
	{
		printf("You are eligible for the next level !");
	}
	else
	{
		printf("Please try again next time !");
	}
			
}
			
			
			
			
				
				
				
				
				
				
					
					
					
					
					
					
						
					
		

			
	 


