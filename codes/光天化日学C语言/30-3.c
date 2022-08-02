#include <stdio.h>
int main() {
    int n, i, sum;
    while (scanf("%d", &n) != EOF) {
        sum = 0;
        i = 1;       /*(1)*/
        while (i <= n /*(2)*/) {
            sum += i;/*(4)*/
            i++;    /*(3)*/
        }
        printf("%d\n", sum);
    }
    return 0;
}

