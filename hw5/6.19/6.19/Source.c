#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TIMES 36000

int main() 
{
	srand(time(0));
	int count[13] = { 0 };

	for (int i = 0; i < TIMES; i++) 
	{
		int total = (rand() % 6 + 1) + (rand() % 6 + 1);
		count[total]++;
	}

	puts("Total\tOccurrences\tProbability");

	for (int i = 2; i <= 12; i++)
	{
		float probability = (float)count[i] / TIMES;
		printf("%d\t%d\t\t%.3f\n", i, count[i], probability);
	}

	return 0;
}
