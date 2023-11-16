#include <stdio.h>

int main()
{
	int term;
	float loan, interest, charge;

	printf("Enter loan principal (-1 to end):");
	scanf("%f", &loan);
	printf("Enter interest rate:");
	scanf("%f", &interest);
	printf("Enter term of the loan in days:");
	scanf("%d", &term);

	charge = loan * term/365 * interest;

	printf("The interest charge is ¢C%.2f", charge);
}