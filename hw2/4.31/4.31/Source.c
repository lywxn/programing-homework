#include <stdio.h>

int main() 
{
	int n = 9;
	int i, j, k;

	for (i = 1; i <= n; i += 2) 
	{
		for (j = 1; j <= (n - i) / 2; j++) 
		{
			printf(" ");
		}

		for (k = 1; k <= i; k++) {
			printf("*");
		}

		printf("\n");
	}

	for (i = n - 2; i >= 1; i -= 2) 
	{
		for (j = 1; j <= (n - i) / 2; j++) 
		{
			printf(" ");
		}

		for (k = 1; k <= i; k++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}