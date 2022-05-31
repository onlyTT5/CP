#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", x | 0b11111111111111111111111111101111);
    return 0;
}