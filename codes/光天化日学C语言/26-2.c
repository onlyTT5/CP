#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 1)
        printf("%d ��������", n);
    else
        printf("%d ��ż����", n);
    return 0;
}
