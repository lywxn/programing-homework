#include <stdio.h>

int main() 
{
	int managers, hourly, commission, piece, paycode;
	double wage, hour, salary;

	printf("Enter the paycode:");
	scanf("%d", &paycode);
	
	

	switch (paycode)
	{
		case 1:
			printf("Your weekly pay is:30k");
			break;

		case 2:
			printf("Enter the working hour:");
			scanf("%lf", &hour);
			printf("Enter the wage:");
			scanf("%lf", &wage);
			if (hour <= 40)
				salary = hour * wage;
			else
				salary = hour * wage + (hour-40) * (wage / 2);
				printf("Your weekly pay is:%.2lf", salary);
			break;

		case 3:
			double sale;
			printf("Enter the weekly total sales:");
			scanf("%lf", &sale);
			sale = sale * 1.057 + 250;
			printf("Your weekly pay is:%.2lf", sale);
			break;

		case 4:
			int i;
			printf("Enter the total of item:");
			scanf("%d", &i);
			i = i * 500;
			printf("Your weekly pay is :%d", i);
			break;
	}
}