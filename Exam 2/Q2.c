#include<stdio.h>
void main()
{
	int n,i,j,ld,Reverse;
	
	printf("Enter Number: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		ld=n%10;
		Reverse=(Reverse*10)+ld;
		n=n/10;
	}
	printf("Number is: %d",Reverse);
}
