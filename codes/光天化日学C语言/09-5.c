#include <stdio.h>
int main()
{
    printf(
        "9%%4=%d\n"
        "9%%-4=%d\n"
        "-9%%4=%d\n"
        "-9%%-4=%d\n",
        9 % 4,
        9 % -4,
        -9 % 4,
        -9 % -4
    );
    return 0;
}