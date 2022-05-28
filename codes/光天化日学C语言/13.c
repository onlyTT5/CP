#include <stdio.h>
int main() {
    int a = 0b1010;           // (1)
    int b = 0b0110;           // (2)
    printf("%d\n", (a & b)); // (3)
    return 0;
}