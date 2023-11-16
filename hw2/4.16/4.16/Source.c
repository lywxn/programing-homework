#include <stdio.h>

int main()
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i ; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < 10; i++) 
	{
		for (j = i; j < 10; j++) 
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < 10; i++)
	{
		for (k = 1; k <= i; k++)
		{
			printf(" ");
		}
		for (j = i; j < 10; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k <= 9 - i; k++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}