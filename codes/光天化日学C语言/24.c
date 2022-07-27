#include <stdio.h>

int main() {
    float f = 520.1314f;
    double d = 520.1314;

    printf("%f\n", f);
    printf("%e\n", f);
    printf("%E\n", f);

    printf("%lf\n", d);
    printf("%le\n", d);
    printf("%lE\n", d);
    return 0;
}
