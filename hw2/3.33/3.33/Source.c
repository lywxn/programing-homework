#include <stdio.h>

int main()
{
	int length, width, i, j;

	printf("Enter the length of the quad:");
	scanf("%d", &length);
	printf("Enter the width of the quad:");
	scanf("%d", &width);

	for (i = 1; i <= length; i++)
	{
		for (j = 1; j <= width; j++)
		{
			if (i == 1 || i == length || j == 1 || j == width)
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}
	
}