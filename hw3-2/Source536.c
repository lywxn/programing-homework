#include <stdio.h>

void hanoi(int n, char source, char auxiliary, char target) 
{
	if (n == 1)
	{
		printf("移動盤子 1 從柱子 %c 到柱子 %c\n", source, target);
		return;
	}

	hanoi(n - 1, source, target, auxiliary);
	printf("移動盤子 %d 從柱子 %c 到柱子 %c\n", n, source, target);
	hanoi(n - 1, auxiliary, source, target);
}

int main() 
{
	int numDisks;

	printf("請輸入盤子的數量： ");
	scanf("%d", &numDisks);

	hanoi(numDisks, 'A', 'B', 'C');

	return 0;
}
