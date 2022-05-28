#include <stdio.h>
int main() {
    printf("%d\n", 0 || 0);  // 0
    printf("%d\n", 5 || 0);  // 1
    printf("%d\n", 0 || 5);  // 1
    printf("%d\n", 5 || 9);  // 1
    return 0;
}