#include <stdio.h>
#include <math.h>

int main(void)
{
	printf("Square roots of integers from 1 to 10:\n");
	for (int x = 1; x <= 10; x++)
	{
		printf("%.2f ", sqrt(x));
	}
	printf("\n");

	return 0;
}
