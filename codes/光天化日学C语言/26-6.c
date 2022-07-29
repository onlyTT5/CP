#include <stdio.h>
int main()
{
	char c;
	c = getchar();

	if (c >= '0' && c <= '9') {
		printf("number\n");
	} 
	else if (c >= 'A' && c <= 'Z') {
		printf("upper letter\n");
	}
	else if (c >= 'a' && c <= 'z') {
		printf("lower letter\n");
	}
	else {
		printf("other\n");
	}

	return 0;
}