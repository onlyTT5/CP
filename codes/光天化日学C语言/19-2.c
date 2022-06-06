#include <stdio.h>
int main() {
    int x = (1 << 31) | (1 << 30) | 1;
    int y = (1 << 31) | (1 << 30) | (1 << 29);
    printf("%d\n", (x >> 1) / y);
    return 0;
}