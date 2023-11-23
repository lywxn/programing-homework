#include <stdio.h>
#include <stdlib.h>

// �Ω�qsort������禡
int compare(const void *a, const void *b) {
	return (*(int *)a - *(int *)b);
}

// �G���k�j�M�禡
int binarySearchRecursive(int arr[], int left, int right, int target) {
	if (left <= right) {
		int mid = left + (right - left) / 2;

		// �ˬd�����������O�_�O�ؼЭ�
		if (arr[mid] == target)
			return mid;

		// �p�G�ؼЭȦb���b��A�Y�p�j�M�d��쥪�b��
		if (arr[mid] > target)
			return binarySearchRecursive(arr, left, mid - 1, target);

		// �p�G�ؼЭȦb�k�b��A�Y�p�j�M�d���k�b��
		else
			return binarySearchRecursive(arr, mid + 1, right, target);
	}

	// �p�G�S�����ؼЭȡA�^�� -1
	return -1;
}

int main() {
	// ��l�ư}�C�A�ó]�w�}�C�������H����
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100; // �ͦ��d��b0��99���H�����
	}

	// �ϥ�qsort�N�}�C�Ѥp��j�Ƨ�
	qsort(arr, 10, sizeof(int), compare);

	// �p��}�C�����Ӽ�
	int n = sizeof(arr) / sizeof(arr[0]);

	// �H����ܤ@�Ӥ����@���ؼЭ�
	int targetIndex = rand() % n;
	int target = arr[targetIndex];

	// �եλ��j�����G���k�j�M�禡
	int result = binarySearchRecursive(arr, 0, n - 1, target);

	// ��X�Ƨǫ᪺�}�C�M�ؼЭ�
	printf("�Ƨǫ᪺�}�C�G");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n�ؼЭȡG%d\n", target);

	// �ھڷj�M���G��X�������T��
	if (result == -1)
		printf("�䤣��ؼЭ� %d\n", target);
	else
		printf("�ؼЭ� %d �b�}�C�������ެ� %d\n", target, result);

	system("pause");
	return 0;
}
