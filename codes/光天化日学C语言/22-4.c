#include <stdio.h>
int main() {
    int a = 0b1010;
    int b = 0b0101;
    int c = 0b1001;
    printf("%d\n", a | b ^ c);
    return 0;
}