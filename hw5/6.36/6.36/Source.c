#include <stdio.h>

void stringReverse(char *sPtr) {
	// 基本情況：當遇到字串終止空字元 '\0' 時，返回
	if (*sPtr == '\0') {
		return;
	}

	// 遞迴調用，處理下一個字元
	stringReverse(sPtr + 1);

	// 列印當前字元
	printf("%c", *sPtr);
}

int main() {
	char s[100];

	// 提示用戶輸入字串
	printf("請輸入一個字串: ");

	// 使用 fgets 來避免 scanf 的一些問題
	if (fgets(s, sizeof(s), stdin) != NULL) {
		// 移除換行符號
		size_t len = strlen(s);
		if (len > 0 && s[len - 1] == '\n') {
			s[--len] = '\0';
		}

		// 檢查是否有輸入字串
		if (len > 0) {
			// 呼叫函數進行反向列印
			stringReverse(s);
			printf("\n");
		}
		else {
			printf("未輸入字串。\n");
		}
	}
	else {
		printf("輸入錯誤。\n");
	}

	return 0;
}
