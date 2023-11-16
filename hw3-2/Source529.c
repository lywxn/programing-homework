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

	printf("請輸入第一個數字：");
	scanf("%d", &num1);

	printf("請輸入第二個數字：");
	scanf("%d", &num2);

	int lcm = calculateLCM(num1, num2);

	printf("最小公倍數是：%d\n", lcm);

	return 0;
}
