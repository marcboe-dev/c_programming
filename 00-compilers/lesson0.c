#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 20; i++)
    {
        putchar(i % 3 ? '*' : '\n');
    }
    return 0;
}
