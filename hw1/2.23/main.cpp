#include <stdio.h>

int main() 
{
	int num1,num2,num3;

	printf("請輸入三個數字（用空格分隔）: ");
	scanf("%d %d %d",&num1,&num2,&num3);

	if(num1>num2&&num1>num3) 
	{
		printf("%d is the largest\n",num1);
	}
	
	if(num2>num1&&num2>num3) 
	{
		printf("%d is the largest\n",num2);
	}
	
	if(num3>num1&&num3>num2) 
	{
		printf("%d is the largest\n",num3);
	}
	
	if(num1<num2&&num1<num3) 
	{
		printf("%d is the smallest\n",num1);
	}
	
	if(num2<num1&&num2<num3) 
	{
		printf("%d is the smallest\n",num2);
	}
	
	if(num3<num2&&num3<num1) 
	{
		printf("%d is the smallest\n",num3);
	}

	return 0;
}
