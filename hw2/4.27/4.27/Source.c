#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;

	for (a = 1; a <= 500; a++)
	{
		for (b = a; b <= 500; b++)
		{
			for (c = b; c <= 500; c++)
			{
				if (a * a + b * b == c * c)
					printf("%d,%d,%d\n", a, b, c);
			}
		}
	}
}