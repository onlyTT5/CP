#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 1)
        printf("%d 是奇数！", n);
    else
        printf("%d 是偶数！", n);
    return 0;
}
