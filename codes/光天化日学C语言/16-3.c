#include <stdio.h>
int main() {
    int n, x, i, ans;
    scanf_s("%d", &n);
    ans = 0;
    for (i = 0; i < n; ++i) {
        scanf_s("%d", &x);
        ans = (ans ^ x);
    }
    printf("%d\n", ans);
    return 0;
}