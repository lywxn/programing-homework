#include <stdio.h>

int main() 
{
	double height,weight,bmi;
		
	printf("Please enter your height(meters):");
	scanf("%lf",&height);
	
	printf("Please enter your weight(kilograms):");
	scanf("%lf",&weight);

	bmi=weight/(height*height);

	printf("\n");
	printf("BMI VALUES\n");
	printf("\n");

	if (bmi<18.5) 
	{

		printf("Your BMI is underweight");

	}
	else if (18.5<=bmi<=24.9) 
	{

		printf("Your BMI is normal");

	}
	else if (25<=bmi<=29.9) 
	{

		printf("Your BMI is overweight");

	}
	else if (bmi>=30) 
	{

		printf("Your BMI is obese");

	}

}
