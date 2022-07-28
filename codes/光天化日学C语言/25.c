#include <stdio.h>

int main() {
    int ninf = 0b11111111100000000000000000000000;
    printf("%f\n", *(float*)&ninf);
    return 0;
}
