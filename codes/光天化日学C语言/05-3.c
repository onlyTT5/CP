#include <stdio.h>
int main()
{
	char str[100];

	scanf_s("%s", str);
	printf("%s", str); // (1)
	scanf_s("%s", &str);
	printf("%s", str); // (2)

	return 0;
}