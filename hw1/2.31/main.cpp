#include <stdio.h>

int main() 
{
	printf("number\tsquare\tcube\n");

	for (int i=0;i<=10;i++) 
	{
		int square=i*i;
		int cube=i*i*i;
		printf("%d\t%d\t%d\n",i,square,cube);
	}

}
