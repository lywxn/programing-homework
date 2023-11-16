#include <stdio.h>

int main() 
{
	int L=9;

	for (int i=0;i<L;i++) 
	{
		for (int j=0;j<L;j++) 
		{
			if (i==0||i==L-1||j==0||j==L-1) 
			{
				
				printf("* ");
			}
			else 
			{
				
				printf("  ");
			}
		}
		printf("\n");
	}

	printf("   ***   \n");
	printf(" *     * \n");
	printf("*       *\n");
	printf("*       *\n");
	printf("*       *\n");
	printf("*       *\n");
	printf("*       *\n");
	printf(" *     * \n");
	printf("   ***   \n");

	printf("  *  \n");
	printf(" *** \n");
	printf("*****\n");
	printf("  *  \n");
	printf("  *  \n");
	printf("  *  \n");
	printf("  *  \n");
	printf("  *  \n");
	printf("  *  \n");

	printf("    *    \n");
	printf("   * *   \n");
	printf("  *   *  \n");
	printf(" *     * \n");
	printf("*       *\n");
	printf(" *     * \n");
	printf("  *   *  \n");
	printf("   * *   \n");
	printf("    *    \n");
	
	return 0;
}
