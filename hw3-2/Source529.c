#include <stdio.h>

int calculateGCD(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int calculateLCM(int a, int b)
{
	if (a == 0 || b == 0)
	{
		return 0;
	}
	return (a * b) / calculateGCD(a, b);
}

int main()
{
	int num1, num2;

	printf("�п�J�Ĥ@�ӼƦr�G");
	scanf("%d", &num1);

	printf("�п�J�ĤG�ӼƦr�G");
	scanf("%d", &num2);

	int lcm = calculateLCM(num1, num2);

	printf("�̤p�����ƬO�G%d\n", lcm);

	return 0;
}
