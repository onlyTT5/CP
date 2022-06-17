#include <stdio.h>
int main() {
    int x, y, a, b;
    a = (1, x = 2, y = 3);
    b = 1, x = 9, y = 3;
    printf("%d %d\n", a, b);
    return 0;
}
