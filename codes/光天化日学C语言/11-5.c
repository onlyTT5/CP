#include <stdio.h>
int main() {
    int a = !((1 || 1) && 0);
    printf("%d\n", a);
    return 0;
}
