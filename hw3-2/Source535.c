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

	printf("╰参ゴ程创猧ê计琌材 %u  %llu\n", max_fib - 1, current_fib);

	unsigned int n;
	printf("叫块璶璸衡创猧ê计竚 ");
	scanf("%u", &n);

	if (n <= max_fib - 1) 
	{
		unsigned long long int result = fibonacci(n);
		printf("材 %u 创猧ê计琌 %llu\n", n, result);
	}
	else 
	{
		printf("禬╰参璸衡程竚\n");
	}

	return 0;
}
