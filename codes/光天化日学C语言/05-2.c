#include <stdio.h>
int main()
{
    int a = 9, b = 8, c = 7, d = 6, e = 5;
    scanf_s("%d %d %d %d", &a, &b, &c, &d);
    printf("%d %d %d %d\n", a, b, c, d);
    scanf_s("%d", &e);
    printf("%d\n", e);
    return 0;
}