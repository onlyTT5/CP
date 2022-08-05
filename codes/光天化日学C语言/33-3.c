#include <stdio.h>
double f(double a, double b, double c, double x) {
    double y = a * x * x + b * x + c;
    return y;
}
int main() {
    double a, b, c, x;
    while (scanf_s("%lf %lf %lf %lf", &a, &b, &c, &x) != EOF) {
        printf("%lf\n", f(a, b, c, x));
    }
    return 0;
}
