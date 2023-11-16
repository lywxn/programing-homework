#include <stdio.h>
#include <stdlib.h>

long factorial(int number);

int main(void)
{
	for (int i = 0; i <= 10; i++)
	{
		printf("%2d! = %ld\n", i, factorial(i));
	}
	return 0;
}

long factorial(int number)
{
	if (number <= 1)
	{
		return 1;
	}
	return number * factorial(number - 1);
}
