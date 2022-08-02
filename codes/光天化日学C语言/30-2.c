#include <stdio.h>

int main() {
    int n, i;
    int sum;
    while (scanf("%d", &n) != EOF) {
        sum = 0;
        for (i = 1 /*(1)*/; i <= n/*(2)*/; ++i /*(3)*/) {
            sum += i;               // (4)
        }
        printf("%d\n", sum);
    }
    return 0;
}
