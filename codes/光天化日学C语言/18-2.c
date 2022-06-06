#include <stdio.h>
int main() {
    printf("%d\n", 16 << -1);   // 16
    printf("%d\n", 32 << -2);   // 8
    printf("%d\n", 32 << -3);   // 4
    printf("%d\n", 32 << -4);   // 2
    printf("%d\n", 32 << -5);   // 1
    printf("%d\n", 32 << -6);   // 0
    printf("%d\n", 32 << -7);   // 0
    return 0;
}