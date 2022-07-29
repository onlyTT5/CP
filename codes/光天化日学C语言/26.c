#include <stdio.h>
int main() {
    int a = 1;                // (1)
    int b = ++a;              // (2)
    int c = a + b;            // (3)
    printf("%d\n", a, b, c);  // (4)
    return 0;                 // (5)
}
