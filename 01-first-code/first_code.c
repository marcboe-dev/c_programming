#include <stdio.h>

int main() 
{
    printf("%%\n");

    int a = 60;
    int b = 10;
    int result = a/b;
    char *name = "Marc";

printf("This is my first program.\nThe first number is %i, the second is %i, the result is %i.\nThis was computed my %s.\n", a, b, result, name);

    return 0;
}
