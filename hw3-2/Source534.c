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

	printf("�п�J���ơG ");
	scanf("%d", &base);

	printf("�п�J���ơG ");
	scanf("%d", &exponent);

	if (exponent < 0) 
	{
		printf("���ƥ����O�D�t��ơC\n");
	}
	else
	{
		int result = power(base, exponent);
		printf("%d �� %d ���赥�� %d\n", base, exponent, result);
	}

	return 0;
}