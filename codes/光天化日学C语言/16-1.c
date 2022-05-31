#include <stdio.h>
int main() {
    int x;
    scanf_s("%d", &x);
    printf("%d\n", x ^ 0b1000);
    return 0;
}