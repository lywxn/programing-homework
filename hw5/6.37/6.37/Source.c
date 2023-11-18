#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ���j��ơG��M��ư}�C�����̤j��
int recursiveMaximum(int *array, int size) {
	// ���j�򥻱��p�G�� size �� 1 �ɡA��^�ߤ@������
	if (size == 1) {
		return array[0];
	}

	// ���j�G��M array[0] �� array[size-2] ���̤j��
	int maxInRest = recursiveMaximum(array, size - 1);

	// ����̤j�ȩM array[size-1]�A��^���j����
	return (maxInRest > array[size - 1]) ? maxInRest : array[size - 1];
}

int main() {
	srand(time(0));  // �ϥη�e�ɶ��@���üƺؤl

	int a[10];

	// �ͦ��H����ƶ�R�}�C a
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 100;
	}

	// �L�X�}�C a �����e
	printf("Array a:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	// �ϥλ��j��Ƨ��}�C a ���̤j�ȨæL�X
	printf("The maximum of array a is %d\n", recursiveMaximum(a, 10));

	return 0;
}
