#include <stdio.h>
#include <string.h>
int main() {
	int i;
	char s[1000];
	while (scanf_s("%s", s) != EOF) {
		for (i = 0; s[i]; ++i) {
			if (s[i] == 'x') continue;     // (1)
			printf("%c", s[i]);
		}
		puts("");
	}
	return 0;
}
