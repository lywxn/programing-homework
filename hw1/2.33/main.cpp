#include <stdio.h>

int main() 
{
	float total_mileage;
	float gas_price;
	float mileage_per_unit;
	float parking_fee;
	float toll_fee;
	float total_cost;

	printf("Please enter the total mileage for the day (kilometers): ");
	scanf("%f",&total_mileage);

	printf("Please enter the gas price (per liter/gallon): ");
	scanf("%f",&gas_price);

	printf("Please enter the average mileage per liter/gallon (kilometers): ");
	scanf("%f",&mileage_per_unit);

	printf("Please enter the daily parking fee (in currency): ");
	scanf("%f",&parking_fee);

	printf("Please enter the daily toll fee (in currency): ");
	scanf("%f",&toll_fee);

	total_cost=(total_mileage/mileage_per_unit)*gas_price+parking_fee+toll_fee;

	printf("\n");
	printf("The estimated cost of driving to work for the day is %.2f currency\n",total_cost);

	return 0;
}
