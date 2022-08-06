#include <stdio.h>
int X = 1;

void PrintX() {
    int X = 2;
    printf("%d\n", X);
}

int main() {
    PrintX();
    return 0;
}
