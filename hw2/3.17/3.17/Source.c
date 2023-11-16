#include <stdio.h>

int main()
{
	int acc;
	float balance, charges, credits, limit;

	printf("Enter account number:");
	scanf("%d", &acc);
	printf("Enter beginnig balance:");
	scanf("%f", &balance);
	printf("Enter total charges:");
	scanf("%f", &charges);
	printf("Enter total credits:");
	scanf("%f", &credits);
	printf("Enter credit limit:");
	scanf("%f", &limit);

	balance = balance + charges - credits;

	if (balance > limit)
	{
		printf("Account      :%d\n", acc);
		printf("Credits limit:%.2f\n", limit);
		printf("Balance      :%.2f\n", balance);
		printf("Credits Limit Exceeded");
	}
}
