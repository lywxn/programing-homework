#include <stdio.h>

void stringReverse(char *sPtr) {
	// �򥻱��p�G��J��r��פ�Ŧr�� '\0' �ɡA��^
	if (*sPtr == '\0') {
		return;
	}

	// ���j�եΡA�B�z�U�@�Ӧr��
	stringReverse(sPtr + 1);

	// �C�L��e�r��
	printf("%c", *sPtr);
}

int main() {
	char s[100];

	// ���ܥΤ��J�r��
	printf("�п�J�@�Ӧr��: ");

	// �ϥ� fgets ���קK scanf ���@�ǰ��D
	if (fgets(s, sizeof(s), stdin) != NULL) {
		// ��������Ÿ�
		size_t len = strlen(s);
		if (len > 0 && s[len - 1] == '\n') {
			s[--len] = '\0';
		}

		// �ˬd�O�_����J�r��
		if (len > 0) {
			// �I�s��ƶi��ϦV�C�L
			stringReverse(s);
			printf("\n");
		}
		else {
			printf("����J�r��C\n");
		}
	}
	else {
		printf("��J���~�C\n");
	}

	return 0;
}
