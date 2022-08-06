#include <stdio.h>

int Power(int x) {
    int y = x * x;     // (1)
    return y;
}

int main() {
    int z;
    z = Power(6);      // (2)
    printf("%d\n", z);
    return 0;
}
