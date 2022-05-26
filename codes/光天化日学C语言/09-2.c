#include <stdio.h>
int main() {
    int a = 1, b = 2;
    double c = 1.005, d = 1.995;
    printf("a * b = %d\n", a * b);
    printf("c * d = %.3lf\n", c * d);
    printf("a * c = %.3lf\n", a * c);
    return 0;
}