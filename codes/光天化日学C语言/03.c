#include <stdio.h>
int main()
{
    int a = 1314, b = 520;
    b = a;
    a = b;
    printf("a=%d b=%d\n", a, b);
    return 0;
}