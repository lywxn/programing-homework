#include <stdio.h>
#include <stdlib.h>

int main() 
{
	srand(0);
	int s = rand();
	int *arr = (int *)malloc(sizeof(int) * s);

	for (int i = 0; i < s; i++) 
	{
		arr[i] = rand();
	}

	for (int i = 0; i < s - 1; i++) 
	{
		for (int j = 0; j < s - 1 - i; j++) 
		{
			if (arr[j] < arr[j + 1]) 
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < s; i++) 
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
	system("pause");
	free(arr);
}
