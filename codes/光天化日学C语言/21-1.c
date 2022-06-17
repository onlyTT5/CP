#include <stdio.h>
int main() {
    int i, s;
    for (i = 1, s = 0; i <= 10; ++i) {
        s += i * i * i;
    }
    printf("%d\n", s);
    return 0;
}
