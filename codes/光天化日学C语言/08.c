#include <stdio.h>
int main() {
    char a = 65;
    char b = '\101';
    char c = '\x41';
    printf("%c %c %c\n", a, b, c);
    return 0;
}