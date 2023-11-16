#include <stdio.h>

int main()
{
	int hours;
	float rate, salary;
	printf("Enter # of hours worked (-1 to end):");
	scanf("%d", &hours);
	printf("Enter hourly rate of the worker (¢C00.00):");
	scanf("%f", &rate);

	if (hours <= 40)
	{
		salary = rate * hours;
		printf("Salary is ¢C%.2f", salary);
	}
	else
		salary = rate * hours + (hours - 40) * rate * 0.5;
		printf("Salary is ¢C%.2f", salary);
}
