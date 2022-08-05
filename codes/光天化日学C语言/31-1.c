#include <stdio.h>

int main() {
    int s = 0, i = 1;
    while (1) {
        s += i;
        ++i;
        if (i > 100) break;
    }
    printf("%d\n", s);
    return 0;
}
