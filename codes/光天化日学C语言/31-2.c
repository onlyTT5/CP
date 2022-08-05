#include <stdio.h>
int main()
{
	int i = 1;
	for (i = 1; ; ++i) {
		if (i % 211 == 0 && i % 985 == 0) {
			break;
		}
	}
	printf("%d\n", i);

	return 0;
}