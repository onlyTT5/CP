#include <stdio.h>
int main() {
    int x = 0b010000;
    printf("%d\n", x | x - 1);
    return 0;
}