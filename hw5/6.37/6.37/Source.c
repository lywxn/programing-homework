#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 遞迴函數：找尋整數陣列中的最大值
int recursiveMaximum(int *array, int size) {
	// 遞迴基本情況：當 size 為 1 時，返回唯一的元素
	if (size == 1) {
		return array[0];
	}

	// 遞迴：找尋 array[0] 到 array[size-2] 的最大值
	int maxInRest = recursiveMaximum(array, size - 1);

	// 比較最大值和 array[size-1]，返回較大的值
	return (maxInRest > array[size - 1]) ? maxInRest : array[size - 1];
}

int main() {
	srand(time(0));  // 使用當前時間作為亂數種子

	int a[10];

	// 生成隨機整數填充陣列 a
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 100;
	}

	// 印出陣列 a 的內容
	printf("Array a:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	// 使用遞迴函數找到陣列 a 的最大值並印出
	printf("The maximum of array a is %d\n", recursiveMaximum(a, 10));

	return 0;
}
