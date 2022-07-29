#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 1)
    {
        n *= 3;
        n -= 4;
    }
    else
    {
        n -= 5;
        n *= 6;
    }
    return 0;
}
