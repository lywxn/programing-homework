#include <stdio.h>
#include <math.h>

int main()
{
	float a[5], interest;

	for (int i = 0; i <= 4; i++)
	{
		interest = 0.1 + i * 0.005;
		a[i] = 5000 * pow(1 + interest, 15);
		printf("The total amount of the investment is:[%.2f]\nYear(s):15\nInterest Rate:%f\n", a[i], interest);
	}
}