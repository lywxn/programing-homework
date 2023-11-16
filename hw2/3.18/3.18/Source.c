#include <stdio.h>

int main()
{
	float sales;
	printf("Enter sales in dollars (-1 to end):");
	scanf("%f", &sales);
	sales = 0.09*sales + 200;
	printf("Salary is:%.2f\n", sales);
}