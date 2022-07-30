#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);

	switch (a) {
	case 1:
		printf("One\n");
		break;

	case 2:
		printf("Two\n");
		break;

	case 3:
		printf("Three\n");
		break;

	case 4:
		printf("Four\n");
		break;

	case 5:
		printf("Five\n");
		break;

	case 6:
		printf("Six\n");
		break;
	
	default:
		printf("Other\n");
		break;
	}

	return 0;
}