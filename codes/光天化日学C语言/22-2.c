#include <stdio.h>
int main() {
    int a = 1;
    --a&& --a;
    printf("%d\n", a);
    return 0;
}