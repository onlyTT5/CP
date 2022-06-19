include <stdio.h>
int main() {
    int a = 0b1010;
    int b = 0b0110;
    printf("%d\n", a & b == 2);
    return 0;
}