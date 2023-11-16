#include <stdio.h>

int main() {
	char c, choice;

	printf("Enter U to convert uppercase to lowercase\n");
	printf("Enter L to convert lowercase to uppercase\n");
	scanf(" %c", &choice);

	if (choice == 'U' || choice == 'u') {
		printf("Enter an uppercase letter: ");
		scanf(" %c", &c);

		if (c >= 'A' && c <= 'Z') {
			c = c - 'A' + 'a';
			printf("Lowercase letter: %c\n", c);
		}
		else {
			printf("Not an uppercase letter!\n");
		}

	}
	else if (choice == 'L' || choice == 'l') {
		printf("Enter a lowercase letter: ");
		scanf(" %c", &c);

		if (c >= 'a' && c <= 'z') {
			c = c - 'a' + 'A';
			printf("Uppercase letter: %c\n", c);
		}
		else {
			printf("Not a lowercase letter!\n");
		}
	}

	return 0;
}