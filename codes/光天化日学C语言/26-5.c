#include <stdio.h>
int main()
{
	char c;
	c = getchar();

	if (isdigit(c) != 0) {
		printf("number\n");
	}
	else if (isupper(c) != 0) {
		printf("upper letter\n");
	}
	else if (islower(c) != 0) {
		printf("lower lotter\n");
	}

	return 0;
}