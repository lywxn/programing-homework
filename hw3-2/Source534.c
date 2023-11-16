#include <stdio.h>

int power(int base, int exponent) 
{
	if (exponent == 0) 
	{
		return 1;
	}

	return base * power(base, exponent - 1);
}

int main()
{
	int base, exponent;

	printf("請輸入底數： ");
	scanf("%d", &base);

	printf("請輸入指數： ");
	scanf("%d", &exponent);

	if (exponent < 0) 
	{
		printf("指數必須是非負整數。\n");
	}
	else
	{
		int result = power(base, exponent);
		printf("%d 的 %d 次方等於 %d\n", base, exponent, result);
	}

	return 0;
}