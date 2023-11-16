#include <stdio.h>

double Power(double, int);

int main(void)
{
	int k;
	double Ans;
	printf("Calculate 3.5 raised to the power of k. Please enter k: ");
	scanf("%d", &k);
	Ans = Power(3.5, k);
	printf("3.5 raised to the power of %d = %f\n", k, Ans);
	return 0;
}

double Power(double X, int n)
{
	double result = 1.0;
	for (int i = 1; i <= n; i++)
	{
		result *= X;
	}
	return result;
}
