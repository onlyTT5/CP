#include <stdio.h>
int X = 0;

int getGlobalX() {
    return X;
}

int main() {
    ++X;
    printf("%d\n", X);
    return 0;
}
