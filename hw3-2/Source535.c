#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) 
{
	if (n <= 1) 
	{
		return n;
	}

	unsigned long long int fib_n_minus_2 = 0;
	unsigned long long int fib_n_minus_1 = 1;
	unsigned long long int fib_n = 0;

	for (unsigned int i = 2; i <= n; i++) 
	{
		fib_n = fib_n_minus_1 + fib_n_minus_2;
		fib_n_minus_2 = fib_n_minus_1;
		fib_n_minus_1 = fib_n;
	}

	return fib_n;
}

int main() 
{
	unsigned int max_fib = 0;
	unsigned long long int current_fib = 0;

	while (1) 
	{
		current_fib = fibonacci(max_fib);
		if (current_fib > 0) 
		{
			max_fib++;
		}
		else 
		{
			break;
		}
	}

	printf("�t�Υi�H���L���̤j���i�����ƬO�� %u �ӡG %llu\n", max_fib - 1, current_fib);

	unsigned int n;
	printf("�п�J�n�p�⪺���i�����ƪ���m�G ");
	scanf("%u", &n);

	if (n <= max_fib - 1) 
	{
		unsigned long long int result = fibonacci(n);
		printf("�� %u �Ӵ��i�����ƬO�G %llu\n", n, result);
	}
	else 
	{
		printf("�W�X�t�Υi�H�p�⪺�̤j��m�C\n");
	}

	return 0;
}
