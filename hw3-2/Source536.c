#include <stdio.h>

void hanoi(int n, char source, char auxiliary, char target) 
{
	if (n == 1)
	{
		printf("���ʽL�l 1 �q�W�l %c ��W�l %c\n", source, target);
		return;
	}

	hanoi(n - 1, source, target, auxiliary);
	printf("���ʽL�l %d �q�W�l %c ��W�l %c\n", n, source, target);
	hanoi(n - 1, auxiliary, source, target);
}

int main() 
{
	int numDisks;

	printf("�п�J�L�l���ƶq�G ");
	scanf("%d", &numDisks);

	hanoi(numDisks, 'A', 'B', 'C');

	return 0;
}
