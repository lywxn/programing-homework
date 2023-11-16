#include <stdio.h>
#include <string.h>

int main(void)
{
	char string1[60] = "Welcome";
	char string2[60];
	int len;

	strcpy(string2, string1);
	printf("string2 = %s\n", string2);

	len = strlen(string2);
	printf("String length is %d\n", len);

	return 0;
}
