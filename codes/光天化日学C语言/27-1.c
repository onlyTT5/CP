#include <stdio.h>

int main() {
    int a = 3, b = 4;
    int x = a > b ? a : b;    // (1)
    int y = (a > b) ? a : b;   // (2)
    printf("%d %d\n", x, y);
    return 0;
}
