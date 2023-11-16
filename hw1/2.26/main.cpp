#include <stdio.h>

int main() 
{
	int num1,num2;
	
	printf("Enter two number:");
	scanf("%d %d",&num1,&num2);

	if(num1%num2==0) 
	{
		printf("%d is the multiple of %d",num1,num2);
	}
	else
	{
		printf("%d is not the multiple of %d",num1,num2);
	}

}
