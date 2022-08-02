#include <stdio.h>
int main()
{
	int n;
	int a = 0;

	scanf_s("%d", &n);
	while (n) {
		if (n == 0 || n == 1) {
			printf("%d\n", a = 1);
		} 
		else {
			printf("%d\n", a = ((n - 1) + (n - 2)));
			n = a;
		}
	}

	return 0;
}