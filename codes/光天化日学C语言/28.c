#include <stdio.h>

int main() {
    int a;
    scanf_s("%d", &a);
    if (a == 1) {
        printf("One\n");
    }
    else if (a == 2) {
        printf("Two\n");
    }
    else if (a == 3) {
        printf("Three\n");
    }
    else if (a == 4) {
        printf("Four\n");
    }
    else if (a == 5) {
        printf("Five\n");
    }
    else if (a == 6) {
        printf("Six\n");
    }
    else {
        printf("Other\n");
    }
    return 0;
}
