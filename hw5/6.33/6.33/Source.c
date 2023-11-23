#include <stdio.h>
#include <stdlib.h>

// 用於qsort的比較函式
int compare(const void *a, const void *b) {
	return (*(int *)a - *(int *)b);
}

// 二分法搜尋函式
int binarySearchRecursive(int arr[], int left, int right, int target) {
	if (left <= right) {
		int mid = left + (right - left) / 2;

		// 檢查中間的元素是否是目標值
		if (arr[mid] == target)
			return mid;

		// 如果目標值在左半邊，縮小搜尋範圍到左半邊
		if (arr[mid] > target)
			return binarySearchRecursive(arr, left, mid - 1, target);

		// 如果目標值在右半邊，縮小搜尋範圍到右半邊
		else
			return binarySearchRecursive(arr, mid + 1, right, target);
	}

	// 如果沒有找到目標值，回傳 -1
	return -1;
}

int main() {
	// 初始化陣列，並設定陣列元素為隨機值
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100; // 生成範圍在0到99的隨機整數
	}

	// 使用qsort將陣列由小到大排序
	qsort(arr, 10, sizeof(int), compare);

	// 計算陣列元素個數
	int n = sizeof(arr) / sizeof(arr[0]);

	// 隨機選擇一個元素作為目標值
	int targetIndex = rand() % n;
	int target = arr[targetIndex];

	// 調用遞迴版的二分法搜尋函式
	int result = binarySearchRecursive(arr, 0, n - 1, target);

	// 輸出排序後的陣列和目標值
	printf("排序後的陣列：");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n目標值：%d\n", target);

	// 根據搜尋結果輸出相應的訊息
	if (result == -1)
		printf("找不到目標值 %d\n", target);
	else
		printf("目標值 %d 在陣列中的索引為 %d\n", target, result);

	system("pause");
	return 0;
}
